#include <C:\110195_VuHuuBac\lib\main.h>

void run_clock();
void set_up();

int h,m,s;
void main (){
	
		h =15;m =25;s=55;
		LCD_init();

while(1)
	{
	 	set_up();
		run_clock();	
	}	
}
// ham gui so cho lcd 
void set_up(){
		
		unsigned char a[16];

		LCDgoto(1,1);
		sprintf(a,"\tDONG HO SO");
		LCDwrites(a);
		sprintf(a,"%d : %d : %d",h,m,s);
		LCDgoto(2,2);
		LCDwrites(a);
	

}
void run_clock()
{
	delay_ms(1000);
	s++;
	if (s==60)
		{
		 s= 0;
		 m++;
		 	if (m == 60){
			
			 	m =0;
				h++;
				if (h ==24) h=0;
			}
		
		
		}
	
	}
		

