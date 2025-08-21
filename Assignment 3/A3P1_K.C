/*
This program can print (A B C D ..... Z) using do while loop
Date: 21st Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    char x='A';
    clrscr();

    do
    {
        printf(" %c", x);
        x++;
    }while(x <= 'Z');

    getch();
}