/*
This program can perfom arithmatic opration via user input
Date: 23th july 2025
Modifide: 26th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x, y, choice;
	clrscr();
	printf("input first digit: ");
	scanf("%d",&x);
	printf("input second digit: ");
	scanf("%d",&y);

	printf("\n1. Addition ");
	printf("\n2. Substraction ");
	printf("\n3. Multiplication ");
	printf("\n4. division ");

	printf("\n input your choice: ");
	scanf("%d",&choice);


	if(choice == 1)
	{
	printf("Addition = %d", x + y);
	}

	else if(choice == 2)
	{
	printf("\nSubstraction = %d", x - y);
	}

	else if(choice == 3)
	{
	printf("\nMultiplication = %d", x * y);
	}

	else
	{
	printf("\nDivision Quotient = %2f",(float)x/y);
	printf("\nDivision Reminder = %d",x%y);
	}

	getch();


}