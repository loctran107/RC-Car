#ifndef HEADER_FILE
#define HEADER_FILE

//LAB 1
#define RCGCGPIO (*((volatile unsigned long*) 0x400FE608))
#define GPIODEN (*((volatile unsigned long*) 0x4002551C))
#define GPIODIR (*((volatile unsigned long*) 0x40025400))
#define GPIODATA (*((volatile unsigned long*) 0x400253FC))
#define GPIOF 0x00000020
#define GPIOLOCK (*((volatile unsigned long*) 0x40025520))
#define GPIOCR (*((volatile unsigned long*) 0x40025524))
#define GPIOPUR (*((volatile unsigned long*) 0x40025510))
#define KEY_2_UNLOCK 0x4C4F434B

#define RCGC2_PA (*((volatile unsigned long*) 0x400FE108))
#define GPIOPCTL_PA (*((volatile unsigned long*) 0x4000452C))
#define GPIOAMSEL_PA (*((volatile unsigned long*) 0x40004528))
#define GPIODIR_PA (*((volatile unsigned long*) 0x40004400))
#define GPIOAFSEL_PA (*((volatile unsigned long*) 0x40004420))
#define GPIODEN_PA (*((volatile unsigned long*) 0x4000451C))
#define GPIODATA_PA (*((volatile unsigned long*) 0x400043FC))

//LAB 2
#define RCGCTIMER (* ((volatile unsigned long*) 0x400FE604))    // enable this timer register
#define ENABLE_TIMER_0 0x00000001                               // key to unable the 16/32 bit general purpose timer 0
#define GPTMCTL (* ((volatile unsigned long*) 0x4003000C))
#define GPTMCFG (* ((volatile unsigned long*) 0x40030000))
#define GPTMTAMR (* ((volatile unsigned long*) 0x40030004))
#define GPTMTAILR (* ((volatile unsigned long*) 0x40030028))
#define GPTMRIS (* ((volatile unsigned long*) 0x4003001C))
#define GPTMICR (* ((volatile unsigned long*) 0x40030024))
#define GPTMIMR (* ((volatile unsigned long*) 0x40030018))
#define EN0 (* ((volatile unsigned long*) 0xE000E100))
#define DISn (* ((volatile unsigned long*) 0xE000E180))

#define GPIOF_Interrupt_Mask (* ((volatile unsigned long*) 0x40025410))
#define GPIOF_Interrupt_Clear (* ((volatile unsigned long*) 0x4002541C))

#define GPIO_Interrupt_Mask_PA (* ((volatile unsigned long*) 0x40004410))
#define GPIO_Interrupt_Clear_PA (* ((volatile unsigned long*) 0x4000441C))

//LAB3
#define RCGCADC (* ((volatile unsigned long*) 0x400FE638))
#define GPIOAFSEL_PE (* ((volatile unsigned long*) 0x40024420))
#define GPIOAFSEL_PD (* ((volatile unsigned long*) 0x40007420))
#define GPIOAFSEL_PB (* ((volatile unsigned long*) 0x40005420))

#define GPIODEN_PE (* ((volatile unsigned long*) 0x4002451C))
#define GPIODEN_PD (* ((volatile unsigned long*) 0x4000751C))
#define GPIODEN_PB (* ((volatile unsigned long*) 0x4000551C))

#define GPIOAMSEL_PE (* ((volatile unsigned long*) 0x40024528))
#define GPIOAMSEL_PD (* ((volatile unsigned long*) 0x40007528))
#define GPIOAMSEL_PB (* ((volatile unsigned long*) 0x40005528))

#define ADCACTSS (* ((volatile unsigned long*) 0x40038000))
#define ADCEMUX (* ((volatile unsigned long*) 0x40038014))
#define ADCSSMUX (* ((volatile unsigned long*) 0x400380A0))
#define ADCSSCTL3 (* ((volatile unsigned long*) 0x400380A4))
#define ADCACTSS (* ((volatile unsigned long*) 0x40038000))
#define ADCPSSI (* ((volatile unsigned long*) 0x40038028))
#define ADCRIS (* ((volatile unsigned long*) 0x40038004))
#define ADCSSFIFO3 (* ((volatile unsigned long*) 0x400380A8))
#define ADCISC (* ((volatile unsigned long*) 0x4003800C))
#define RCC (* ((volatile unsigned long*) 0x400FE060))
#define RIS (* ((volatile unsigned long*) 0x400FE050))
#define ADCIM (* ((volatile unsigned long*) 0x40038008))
#define RCC2 (* ((volatile unsigned long*) 0x400FE070))
#define UARTDMACTL (* ((volatile unsigned long*) 0x4000C048))
#define RCGCUART (* ((volatile unsigned long*) 0x400FE618))
#define UARTCTL (* ((volatile unsigned long*) 0x4000C030))
#define UARTIBRD (* ((volatile unsigned long*) 0x4000C024))
#define UARTFBRD (* ((volatile unsigned long*) 0x4000C028))
#define UARTFBRD (* ((volatile unsigned long*) 0x4000C028))
#define GPIOAFSEL_PA (* ((volatile unsigned long*) 0x40004420))
#define PRGPIO (* ((volatile unsigned long*) 0x400FEA08))
#define UARTLCRH (* ((volatile unsigned long*) 0x4000C02C))
#define GPIO_PA_DEN (* ((volatile unsigned long*) 0x4000451C))
#define GPIOPCTL (* ((volatile unsigned long*) 0x4000452C))
#define GPIOAMSEL (* ((volatile unsigned long*) 0x40004528))
#define UARTCC (* ((volatile unsigned long*) 0x4000CFC8))
#define UARTIM (* ((volatile unsigned long*) 0x4000C038))
#define UARTDR (* ((volatile unsigned long*) 0x4000D000))
#define UARTICR (* ((volatile unsigned long*) 0x4000C044))
#define UARTFR (* ((volatile unsigned long*) 0x4000D018))
#define DMACHIS (* ((volatile unsigned long*) 0x400FF504))
#define UARTRIS (* ((volatile unsigned long*) 0x4000C03C))
#define GPIO_PCTL_PORTB     (*(volatile uint32_t *)0x4000552C)
#define UART_CTL            (*(volatile uint32_t *)0x4000D030)
#define UART_IBRD           (*(volatile uint32_t *)0x4000D024)
#define UART_FBRD           (*(volatile uint32_t *)0x4000D028)
#define UART_LCRH           (*(volatile uint32_t *)0x4000D02C)
#define UART_CC             (*(volatile uint32_t *)0x4000DFC8)

#endif
