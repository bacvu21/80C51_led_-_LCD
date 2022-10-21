#include <C:\Users\taikh\Desktop\110195_VuHuuBac\lib\main.h>


void set_Timer ();
void timer();
void clock_Setup();
void run_clock();

int h,m ,s;
int i;

void main(){

		  h = 1;m = 28 ;s =00;
		  LCD_init();
		  timer();
		  set_Timer();

}
void set_Timer ()

{
	TMOD =0x01; //	chon timer 0 che do 1
	TH0 = 0x3C;
	TL0 = 0xB0;
	EA = 1;	//cho phesp ngat 
	ET0 = 1;   //Cho phep ngat timer0
	TR0 = 1;  //cho phep tran 

}

void timer() interrupt 1 {


	TF0 =0;	
	TH0 =0x3C;
	TL0 =0xB0;
	i++;		

	if (i == 20){
		 i =0;
			s++;
			  	if (s == 60){
					  	s = 0;
					  	m++;
							if (m ==60){
								m = 0;
								h++;
									if (h ==24 ) h = 0;						
						}
				}
		}
	clock_Setup();
	}
	  
void clock_Setup(){
		
		unsigned char a[16];

		LCDgoto(1,1);
		sprintf(a,"\tDONG HO SO");
		LCDwrites(a);
		sprintf(a,"%d : %d : %d",h,m,s);
		LCDgoto(2,2);
		LCDwrites(a);

}
