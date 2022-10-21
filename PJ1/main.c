//hien thi tu 0 - 9
	 /*Author : Vu Huu Bac 
	   purpose : learn code led 7 segment anode 
	 */
#include <regx51.h>
#include "..\110195_VuHuuBac\delay.h" //duong dan tuong doi 
sfr led7 =0x80;

	void main (void){
		  unsigned char ar[10]={0x01,0x4f,0x12,0x6,0x4C,0x24,0x20,0x0F,0x00,0x04};
		  char i;
	while (1){
		  	for (i =0 ;i <10;i++){
			   led7=ar[i];
			   delay_ms(300);
			
			}
		}

	}
