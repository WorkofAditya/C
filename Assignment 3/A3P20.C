/*
This program checks if inputed number is armstrong or not.
Date: 23th Sep 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int num, origNum, remain, result = 0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &num);

	origNum = num;
	while (origNum != 0)
	{
		remain = origNum % 10;
		result += remain * remain * remain;
		origNum /= 10;
	}

	if (result == num)
	{
		printf("%d is an Armstrong number.\n", num);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", num);
	}

    getch();
}
