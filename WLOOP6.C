/*
This program can print numbers with while loop
Date: 7th Aug 2025
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

       while(x<=y)
  {
      printf ("%d ",x);

      x=x+1;
  }

    printf ("\n");
    y=y+1;
 }
    getch();
 }

