#include <REGX52.H>
#include "LCD1602.h"
void main()
{
	LCD_Init();
	LCD_ShowChar(1,1,'A');//第一行，第一个位置显示字符A
	LCD_ShowString(1,3,"Hello");//第一行第三个位置开始显示字符串Hello
	LCD_ShowNum(1,9,123,3);//显示数字
	LCD_ShowSignedNum(1,13,-66,2);//显示有符号数字
	LCD_ShowHexNum(2,1,0xA8,2);//显示2位16进制
	LCD_ShowHexNum(2,4,0xAA,2);//（只能写16）显示16进制数的二进制
	while(1)
	{
		
	}
}
