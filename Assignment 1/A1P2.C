/*
This program can input makrs of subjects then perform total and gives persentage as output and also assign grade in the base of marks
Date: 22th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()

{
	int c,html,cf,math,total,grade;
	clrscr();
	printf("Input Marks of C: ");
	scanf("%d",&c);
	printf("input marks of html: ");
	scanf("%d",&html);
	printf("input marks of CF: ");
	scanf("%d",&cf);
	printf("input marks of math: ");
	scanf("%d",&math);

	total = c + html + cf + math;
	grade = total/4;

	printf("\nYour Total Marks is %d ",total);
	printf("\nYour percentage is %d ",grade);

	if(grade>90)
	{
		printf("\nYour Grade is A++");
	}
	else if(grade>80)
	{
		printf("\nYour Grade is A+");
	}
	else if(grade>70)
	{
		printf("\nYour Grade is A");
	}
	else if(grade>60)
	{
		printf("\nYour Grade is B");
	}
	else if(grade>50)
	{
		printf("\nYour Grade is C");
	}
	else if(grade>40)
	{
		printf("\nYour Grade is D");
	}
	else
	{
		printf("FAIL");
	}
	getch();
}


