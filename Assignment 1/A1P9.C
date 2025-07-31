/*
This program can print sum of 3 numbers that was inputed by user
Date: 31th july 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, d;
    clrscr();
    printf("\n Input first number: ");
    scanf("%d",&a);
    printf("\n Input second number: ");
    scanf("%d",&b);
    printf("\n Input third number: ");
    scanf("%d",&c);
    d = a + b + c;
    printf("\n Sum of this numbers are: %d",d);
    getch();

}

