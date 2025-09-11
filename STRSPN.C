/*
This program show the use of STRSPN function
Date: 11th sep 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50] = " ", str2[50] = " ";
	int in;
	clrscr();
	printf("\n Input first string: ");
	scanf("%[^\n]s",str1);
	printf("\n Input second string: ");
	fflush(stdin);
	scanf("%[^\n]s",str2) ;
	in = strspn(str1,str2);
	printf("\n %d",in);
	getch();

}