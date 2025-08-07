/*
This program can print if 3 numbers is bigger or smaller to other number
Date: 23th july 2025
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

   if (num1>num2)
	{
		if (num1>num3)
		{
			printf ("number 1 is greatest");
		}

		else
		{
			printf ("number 3 is greatest");
		}

	 }

   else
	{
		if (num2>num3)
		{
			printf ("number 2 is greatest");
		}

		else
		{
			printf ("number 3 is greatest");
		}
	}

       getch();
}



