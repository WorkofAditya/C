#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50]=" ", str2[50]=" ";
	clrscr();
	printf("\n input first string: ");
	scanf("%[^ \n]s",str1);
	printf("\n input second string:");
	fflush(stdin);
	scanf("%[^ \n]s",str2);
	if(strncmp(str1,str2,3)==0)
	{
		printf("\n two string are equal");
	}

	else
	{ 	printf("\n two string are not equal");

	}

	getch();

}