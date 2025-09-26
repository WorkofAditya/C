/*
This program shows the usage of pointer.
Date: 26th Sep 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()

{

	int num1=5, num2=6, num3=7, count=0;
	int *p[3];
	clrscr();
	p[0] = &num1;
	p[1] = &num2;
	p[2] = &num3;

	for(count=0; count<=2; count++)
	{
		printf("\n num %d = %d",count+1, *p[count]);
	}
	getch();


}
