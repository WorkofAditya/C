/*
This is the example of POINTER TO VARIABLE
Date: 1st Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1=25;
	int *p=&num1;
	clrscr();
	printf("\n memory address of num1=%u",&num1);
	printf("\n memory address of num1=%u",p);
	printf("\n value stord at the address=%d",*&num1);
	printf("\n value stord at the address=%d",*p);

	num1=50;
	printf("\n value stored at the address=%d",num1);
	printf("\n value stored at the address=%d",*&num1);
	printf("\n value stored at the adsress=%d",*p);

	*p=75;
	printf("\n value stored at the address=%d",num1);
	printf("\n value stored at the address=%d",*&num1);
	printf("\n value stored at the address=%d",*p);

	getch();
}
