/*
This program prints A to Z and a to z using a single loop
Date: 23rd Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char i='A',n=' ';
	clrscr();
	printf("enter n ;");
	scanf("%c",&n);
	while(i<=n)
	{
		if(i>'Z'&&i<'a')
		{
			i++;
			continue;
		}
		printf(" %c",i);
		i++;
	}
	getch();
}
