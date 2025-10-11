#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50] = " ", str2[50] = " ";

	clrscr();
	printf("\n Input first string: ");
	scanf("%[^\n]s",str1);
	
	printf("\n Input second string: ");
	fflush(stdin);
	scanf("%[^\n]s",str2) ;
	
	printf("\n %d", strcspn(str1,str2));
	
	getch();
}

