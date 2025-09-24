/*
This program can print array using its address
Date: 24th Sep
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int num[5]={10,20,30,40,50};
	int *p=&num[0];
	clrscr();
	printf("\n variable:");
	printf("\n %d",num[0]);
	printf("\n %d",num[1]);
	printf("\n %d",num[2]);
	printf("\n %d",num[3]);
	printf("\n %d",num[4]);

	printf("\n address:");
	printf("\n %d",*(p+0));
	printf("\n %d",*(p+1));
	printf("\n %d",*(p+2));
	printf("\n %d",*(p+3));
	printf("\n %d",*(p+4));

	getch();
}