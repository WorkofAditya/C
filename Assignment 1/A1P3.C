/*
This program can gives multiplication table as user input a number
Date: 28th July 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i;
	clrscr();
	printf("enter a number to display its multiplication table: ");
	scanf("%d",&num);
	printf("multiplication table of %d:\n",num);

	for (i=1; i<10; i++)
	{
	printf("%d %d = %d\n",num,i,num*i);
	}
	getch();

}