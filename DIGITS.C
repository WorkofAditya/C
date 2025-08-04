/*
This program can print sum of digits using loop
Date: 4th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main ()

{
      int num=0,digit=0,sum=0;
      clrscr();
      printf("\n input a number:");
      scanf("%d",&num);

      while(num!=0)
     {

      digit= num%10;
      sum= sum+digit;
      num= num/10;
     }
	 printf ("\n sum of digits=%d",sum);

	getch();

}