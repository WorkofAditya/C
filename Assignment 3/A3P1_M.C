/*
This program can print (A B C D ..... Z) using single loop
Date: 21st Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    char x='A';
    clrscr();

    while(x <= 'Z')
    {
        printf(" %c", x);
        x++;
    }

    getch();
}