/*
This program can print (1 8 27 64 125 ..... up to n) using while loop
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

    while(x*x*x <= n)
    {
        printf("\n %d", x*x*x);
        x = x + 1;
    }

    getch();
}
