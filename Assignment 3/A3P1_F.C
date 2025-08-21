/*
This program can print (1 4 9 16 25 ..... n) using do while loop
Date: 21st Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int x=1, n;
    clrscr();
    printf("input n: ");
    scanf("%d",&n);

    do
    {
        printf("\n %d", x*x);
        x = x + 1;
    }while(x <= n);

    getch();
}