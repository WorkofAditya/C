/*
This program can print 1 to 5 digits 5 times
Date: 5 Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    int x=1,y=1;
    clrscr();


    while(y<=5)
  {
       x=1;

       while(x<=5)
  {
      printf ("%d ",x);

      x=x+1;
  }

    printf ("\n");
    y=y+1;
 }
    getch();
 }


