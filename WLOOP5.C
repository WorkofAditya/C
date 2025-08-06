/*
This program can print numbers with while loop
Date: 6th Aug 2025
Author: Adityarajsinh Jadav
*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    int x=25,y=1;
    clrscr();


    while(y<=9)
  {
       x=25;

       while(x>=5)
  {
      printf ("%d ",x);

      x=x-5	;
  }

    printf ("\n");
    y=y+1;
 }
    getch();
 }

