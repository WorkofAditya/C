/*
This program is a basic example of array
Date: 26th Aug 2025
author : Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int num[5], x=0;
	clrscr();
	printf("\n input five number:");
	for(x=0;x<=4;x=x+1)
	{
		scanf("%d",&num[x]);
	}
		for(x=0;x<=4;x=x+1)
		{
			printf("\n number1=%d",num[x]);
		}
getch();
}