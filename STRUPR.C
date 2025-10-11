#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	char str [50]=" ";
	clrscr();
	printf("\n Input a string: ");
	scanf("%[^\n]s",str);
	printf ("\n %s",strupr(str));


	getch();
}





