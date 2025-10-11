/*
This is the example of POINTER TO ARRAY
Date: 1st Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main ()
{

	int num1=5,num2=4,num3=8,count=0;
	int *p[3];
	clrscr();
	p[0]=&num1;
	p[1]=&num2;
	p[2]=&num3;
	for(count=0;count<=2;count++)
	{
		printf("\n num%d = %d",count+1,*p[count]);
	}
	getch();
}

