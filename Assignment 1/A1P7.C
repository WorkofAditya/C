#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,n,a,ci;
	clrscr();
	printf("enter p ;");
	scanf("%f",&p);
	printf("enter r ;");
	scanf("%f",&r);
	printf("enter n ;");
	scanf("%f",&n);
	a=p*pow((1+r/100),n);
	ci=a-p;
	printf("total amount : %.2f",a);
	printf("\ncompound interest : %.2f",ci);
	getch();

}