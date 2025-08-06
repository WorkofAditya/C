/*
This program does addition, subtraction, multiplication or division based on user input
Date: 7th Aug 2025
author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	float num1, num2, result;
	char op;
	clrscr();

	printf("input first number: ");
	scanf("%f", &num1);

	printf("input second number: ");
	scanf("%f", &num2);

	printf("input operator (+, -, *, /): ");
	scanf(" %c", &op);  // space before %c to consume any leftover newline

	switch(op)
	{
		case '+':
			result = num1 + num2;
			printf("result: %.2f", result);
			break;

		case '-':
			result = num1 - num2;
			printf("result: %.2f", result);
			break;

		case '*':
			result = num1 * num2;
			printf("result: %.2f", result);
			break;

		case '/':
			result = num1 / num2;
			printf("result: %.2f", result);
			break;

		default:
			printf("invalid operator");
	}

	getch();
}
