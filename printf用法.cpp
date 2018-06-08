#include <stdio.h>

int main()
{
	printf("hello,world!\n");
	printf("a:%d \n",32);									//显示一个整数
	printf("a:%d,b:%d \n",33,34);							//显示多个整数
	printf("a:%03d ok\nb:%03d ok\nc:%03d ok\n",3,33,333);	//指定整数位数、对齐显示
	
	int a=10;		//定义整数变量
	int b=1209890;
	printf("a:%d,b:%d \n",a,b);
	
	printf("x=%f \n",12.35);				//显示一个小数
	printf("x=aaaa%fbbbb \n",12.35);
	printf("x=%f,y=%f \n",12.35,90.01);		//显示多个小数
	
	double x=123.456;		//定义一个小数变量
	printf("x=%f \n",x);
	printf("x=%.2f \n",x);	//指定小数点后面的位数
	
	printf("result:%d \n",123*456);
	printf("result1:%2d \n",a*456);
	printf("result2:%.2f \n",x*x);
	
	return 0;
}                       

