/*
This program checks if inputed string is palindrome string on not
Date: 8th Sep 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()

{

	char str[50],cstr[50];
	clrscr();
	printf("\n input string: ");
	scanf("%[^\n]s",str);
	strcpy(cstr,str);
	strrev(str);

	   if (strcmp(cstr,str)==0)
	   {
		printf("%s: is a palindrome string",cstr);
	   }

	   else
	   {
		printf("%s: is not a palindrome string",cstr);
	   }

	getch();
}