/*
This program shows the usage of struct within pointer
Date: 8th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

struct student
{
	int rollno;
	char name[25];
	int *p;
};

void main()
{
	struct student s1 = {1, "abc def"};
	clrscr();
	s1.p = &s1.rollno;
	printf("\n roll no = %d",s1.rollno);
	printf("\n name = %s",s1.name);
	printf("\n roll no = %d",*s1.p);
	getch();
}