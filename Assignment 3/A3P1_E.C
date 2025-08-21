/*
This program can print (10 20 30 40 ..... n) using do while loop
Date: 22nd Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int x=10, n;
    clrscr();
    printf("input n: ");
    scanf("%d",&n);

    do
    {
        printf("\n %d", x);
        x = x + 10;
    }while(x <= n);

    getch();
}