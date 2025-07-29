/*
This program can compare 3 numbers via user input and with oprater command
Date: 29th july 2025
author: Adityasinh Sodha
*/

#include <stdio.h>
#include <conio.h>
void main ()
{
   int num1,num2,num3;
   clrscr();
   printf ("input three numbers: ");
   scanf ("%d %d %d",&num1,&num2,&num3);

   (num1>num2)?

		 (num1>num3)?

			printf ("number 1 is greatest")


		:

			printf ("number 3 is greatest")




   :

		 (num2>num3)?

			printf ("number 2 is greatest")


		:

			printf ("number 3 is greatest");



       getch();

 }


