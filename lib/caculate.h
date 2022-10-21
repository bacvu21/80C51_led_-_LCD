#ifndef _caculate_h_
#define _caculate_h_



void LCDbusy ();
void LCDCommand(unsigned char a);
void LCDwrite (unsigned char a);
void LCD_init();
void LCD_String(unsigned char *str);
void LCD_String_xy(char row, char pos, char *str);
void LCDgoto (unsigned char x, unsigned char y );
void LCDwrites (unsigned char *p); 	 



#endif 