/*
This program can print (2 4 6 8 ..... n) with for loop
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
    for(x=2; x<=n; x=x+2)
    {

	printf("\n %d",x);


    }
    getch();
 }

