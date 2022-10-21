/*author : Vu Huu Bac 
  Purpose : learning C advance */




 #include "C:\110195_VuHuuBac\lib\main.h"
 #include "C:\110195_VuHuuBac\lib\port.h"





void maquet (unsigned char n )

{
	LS138_A =n%2;
	LS138_B =(n/2)%2;
	LS138_C =(n/4)%2;
}

void hienthi(long n ){
	

 
			  unsigned char maled[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
			  char a[8] ,i,scs;
			  i =0;

		  if (n ==0){
		     maquet(0);
			led7 =maled[a[0]];
			delay_ms(1);
		  
		  }
			  while (n!=0){
			  		a[i] = n%10;
					n =n/10;
					i++;
			  
			  
			  }
		scs = i;
		for (i =0;i <scs ;i++){
		
			maquet(i);
			led7 =maled[a[i]];
			delay_ms(1);
			
		}
	}
			  
