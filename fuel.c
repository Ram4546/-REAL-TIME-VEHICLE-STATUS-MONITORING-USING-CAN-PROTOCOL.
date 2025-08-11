#include<LPC21XX.h>
#include"adc_defines.h"
#include"defines.h"
#include"can.h"
#include"can_defines.h"
#define min 0.43
#define max 2.45
f32 fuelval;
u8 fuel_percent;
int main()
{
	struct CAN_Frame txFrame;
	Init_CAN1();
	txFrame.ID=11;
	txFrame.vbf.RTR=0;
	txFrame.vbf.DLC=1;
	Init_ADC();
	while(1)
	{
		  fuelval=READ_ADC(1);
		  fuel_percent=((fuelval-min)/(max-min))*100;
		  txFrame.Data1=fuel_percent;
		  CAN1_Tx(txFrame);
	}
}
