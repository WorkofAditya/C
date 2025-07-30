/*
This program can change the value of two intiger via user input
Date: 30th july 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;
    clrscr();

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("%d\n", a);
    printf("%d\n", b);
    getch();

}
