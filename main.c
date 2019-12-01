#include <header_file.h>
#include <stdint.h>

char a = 'a';

// move the car in forward direction
void forward(){
  GPIODATA_PA |= 0xc;
}

// move the car in backward direction
void backward(){
  GPIODATA_PA |= 0x10;
}

// make the car turn left in forward direction by making the wheels on the right side go forward and stop the wheels on the left side
void left(){
  GPIODATA_PA |= 0x8;
  for (int j = 0 ; j < 10000000; j++) {};
  GPIODATA_PA &= ~0x8;
}

// make the car turn right in forward direction by making the wheels on the left side go forward and stop the wheels on the right side
void right(){
  GPIODATA_PA |= 0x4;
  for (int j = 0 ; j < 10000000; j++) {};
  GPIODATA_PA &= ~0x4;
}

// stop the car
void stop(){
  GPIODATA_PA = 0;
}


void GPIO_Init() {
  volatile unsigned long delay;
  RCGC2_PA |= 0x01;                     // activate clock for Port A
  delay = RCGC2_PA;                     // allow time for clock to start
  GPIOPCTL_PA &= ~0xFFF00;              // regular GPIO PA2
  GPIOAMSEL_PA &= ~0x1c;                 // disable analog  function of PA2
  GPIODIR_PA |= 0x1c;                    // set PA2 to output
  GPIOAFSEL_PA &= ~0x1c;                 // regular port function
  GPIODEN_PA |= 0x1c;                    // enable digital output on PA2

  RCGCGPIO |= 0x2;                      // enable clock to PortB
  GPIOAFSEL_PB |= 0x3;                  // allow alternative function for PB 0&1
  GPIODEN_PB |= 0x3;                    // enable digital pins
  GPIO_PCTL_PORTB |= 0x11;              // set alternative function to UART
}

void UART_Init() {
  RCGCUART |= 0x2;                      // enable clock to UART Module 1
  int32_t delay = RCGCUART;             // delay to wait for clock setup

  UART_CTL &= ~(1 << 0);                // diable module before configuration

  // set the baud rate (integer & fraction parts)
  UART_IBRD = 8;
  UART_FBRD = 44;

  UART_LCRH |= 0x60;                    // set the transmission line control
  UART_CC = 0x0;                        // use system clock

  UART_CTL |= (1 << 9);                 // set the receive enable
  UART_CTL |= (1 << 8);                 // set the transmit enable
  UART_CTL |= (1 << 0);                 // enable the UART
}

void delay() {
  for (int i = 0; i < 1000000; i++) {}
}

// read the received data from the bluetooth using UART
char readData(void) {
    char c;
    while ((UARTFR & (1 << 4)) != 0) {}         // dont read when the receiver is empty
    c = UARTDR;
    return c;
}

int main()
{
  GPIO_Init();
  UART_Init();

  while(1){

    delay();
    a = readData();

    // control the car using the received data from the bluetooth
    if(a == 'F'){
      forward();
    }else if (a == 'B'){
      backward();
    }else if (a == 'R'){
      right();
    }else if (a == 'L'){
      left();
    }else if (a == 'O'){
      stop();
    }
  }

  return 0;
}
