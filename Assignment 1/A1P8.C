/*
This program can change the value of two intiger via user input
Date: 30th july 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, x, y;
    clrscr();

    printf("----USING 3RD VARIABLE----");

    printf("\n Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("\n%d\n", a);
    printf("%d\n", b);

    printf("\n ----WITHOUT USING 3RD VARIABLE----");

    printf("\n Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("\n%d",x);
    printf("\n%d",y);
    getch();

}
