/*author : Vu Huu Bac 
  class  :110195
  Purpose: learning C advance */


#ifndef _port_
#define _port_
#include <C:\Users\taikh\Desktop\110195_VuHuuBac\lib\main.h>


//set cac chan cho led 7 thanh
sfr led7 =0x80;
sbit LS138_A =P2^0;
sbit LS138_B =P2^1;
sbit LS138_C =P2^2;

//set cac chan cho LCD
sfr  LCD1602_data =0x80;
sbit LCD1602_RS = P2^0;
sbit LCD1602_RW = P2^1;
sbit LCD1602_E =P2^2;
sbit LCD1602_BF =0x87;


//set cac chan vdk cai dat khac 
sbit a = P3^0;
sbit b = P3^1;


//port 
//P1 =0x00;
//P2 =0x00;
sbit xung = P1^0;


#endif