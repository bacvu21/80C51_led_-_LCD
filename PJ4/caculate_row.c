 /* Author :Vu Huu bac
 	Purpose: Learning C */


#include <C:\Users\taikh\Desktop\110195_VuHuuBac\lib\main.h>

void LCDgoto (unsigned char x, unsigned char y );
void LCDbusy ();
void LCDCommand(unsigned char a);
void LCDwrite (unsigned char a);
void LCD_init();
void LCD_String(unsigned char *str);
void LCD_String_xy(char row, char pos, char *str);
void LCDwrites (unsigned char *p); 	   
										  	 
 // di den vi tri tren lcd 


// function clear the lcd


void LCDbusy(){

	LCD1602_RS =0;
	LCD1602_RW = 1;
	LCD1602_BF =1;
	while (LCD1602_BF){
		LCD1602_E =0;
		LCD1602_E =1;
		
	}

}
void LCDcommand(unsigned char a ){


	LCD1602_RS =0;
	LCD1602_RW =0;
	LCD1602_data = a;


	LCD1602_E = 1;

	LCD1602_E =0;
	LCDbusy();




}
void LCDwrites (unsigned char *p){
		  unsigned char d, len ;
		  len = strlen(p);
		  for (d =0;d<len;d++)
		  LCDwrite(*(p+d));

}
void LCDgoto(unsigned char x, unsigned char y )

{


	if (x==1) LCDcommand(0x80 + y -1);
	if (x==2) LCDcommand(0xc0 + y -1);
}
void LCD_clear (){


	LCDcommand(0x01);

}

void LCDwrite (unsigned char a){

	LCD1602_RS =1;
	LCD1602_RW = 0;
	LCD1602_data = a;
	LCD1602_E =1;
	LCD1602_E =0;
	LCDbusy();
	
}
void LCD_init(){
	
	LCDcommand (0x38);	
	LCDcommand (0x0C);		
	LCDcommand (0x01);	/* clear display */
	LCDcommand (0x80);


}
void LCD_String(unsigned char *str){

	int i;
	for(i=0;str[i]!=0;i++)  
	{
		LCDwrite (str[i]);  
	}
}


void LCD_String_xy (char row, char pos, char *str)  
{
	if (row == 0)
	LCDCommand((pos & 0x0F)|0x80);
	else if (row == 1)
	LCDCommand((pos & 0x0F)|0xC0);
	LCD_String(str);	
}
void lcd(unsigned char str1[10]) 
{
LCDcommand(0x38); 
LCDcommand(0x0e); 
delay_ms();
LCDwrites(str1);
}