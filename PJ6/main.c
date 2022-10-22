 	#include "D:\projectlinhtinh\8051memory\110195_VuHuuBac\lib\main.h"


unsigned char THonreload,TLonreload,THoffreload,TLoffreload;
unsigned char D;
unsigned int T, Ton, Toff;
	void timercal()
		{
		Ton  = D*(T/100);
		Toff = T- Ton;
		THonreload = (65536- Ton)/256;
		TLonreload = (65536- Ton)%256;
		THoffreload = (65536- Toff)/256;
		TLoffreload = (65536- Toff)%256;
		
		}
		void timerinit()
		{
		TMOD = 0x01; // CHON TIMER 0 CHE DO 1
		TH0  = 0xfe;// nap gia tri khoi dau dem
		TL0  = 0X0B;
		EA   = 1;//cho phep nhat
		ET0  = 1;//cho phep nhat timer 0
		TR0  = 1;//cho phep dem
		}
	void timer () interrupt 1
		{
		xung = ~xung;
		if (xung)
		{
		TH0  = THonreload;
		TL0  = TLonreload;
		}
		else
		{
		TH0 = THoffreload;
		TL0 = TLoffreload;
		}
		
		}
	void tang()
		{
		if ( Ux== 0)
		{
		while (Ux==0);
		D=D+10;
		timercal();
		if(D>100) D=100;
		timercal();
		}
		}
	void giam ()
		{
		if (Dx==0)
		{
		while (Dx==0 );
		D=D-10;
		timercal();
		if(D<0) D=0;
		timercal();
		}
		}
		void main()
		{
		
		D = 50; T=1000;
		timerinit();
		timercal();
		
		xung = 1;
		while(1)
		{
		
		tang();
		giam();
		timercal();
		
		
		}
		}
