/*
This program inputs marks of 4 subjects for 3 students, calculates total and percentage,
and assigns grade based on percentage using if statements
Date: 7th Aug 2025
author: Adityasinh Sodha
*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int c, html, cf, math, total, percentage;
	int i = 1;  
	clrscr();

	while(i <= 3)
	{
		printf("\n Student %d\n", i);
		printf("Input Marks of C: ");
		scanf("%d", &c);
		printf("Input Marks of HTML: ");
		scanf("%d", &html);
		printf("Input Marks of CF: ");
		scanf("%d", &cf);
		printf("Input Marks of Math: ");
		scanf("%d", &math);

		total = c + html + cf + math;
		percentage = total / 4;

		printf("Total Marks: %d\n", total);
		printf("Percentage: %d%%\n", percentage);

		if(percentage > 90)
		{
			printf("Grade: A++\n");
		}
		else if(percentage > 80)
		{
			printf("Grade: A+\n");
		}
		else if(percentage > 70)
		{
			printf("Grade: A\n");
		}
		else if(percentage > 60)
		{
			printf("Grade: B\n");
		}
		else if(percentage > 50)
		{
			printf("Grade: C\n");
		}
		else if(percentage > 40)
		{
			printf("Grade: D\n");
		}
		else
		{
			printf("Grade: FAIL\n");
		}

		i++; 
	}

	getch();
}
