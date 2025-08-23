/*
This program can print (5 10 15 20 ..... n) with for loop
Date: 21th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    int x, y, n;
    clrscr();
    printf("input n: ");
    scanf("%d",&n);
    for(x=5; x<=n; x=x+5)
    {

	printf("\n %d",x);


    }
    getch();
 }

