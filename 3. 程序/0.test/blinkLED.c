#include <gpio.h>





int main(void)
{
    volatile uint32_t i;

    WDTCTL = WDTPW | WDTHOLD;           // Stop watchdog timer

	  GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);  //����GPIO��ʼ��Ϊ���

  	GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN2);

	 GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN5);
    while(1)
    {
		GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);	//����ָ��IO�����
		GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN2);
		GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN5);

        for(i=100000; i>0; i--);        // Delay
		
		GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);	//����ָ��IO�����
		GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN2);
		GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN5);
		
		for(i=100000; i>0; i--);        // Delay

    }
}

