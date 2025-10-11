#include <stdio.h>
#include <conio.h>
void main()
{
	int x=5;
	int *p=&x;
	int **p1=&p;
	clrscr();
	printf("\n %d",x);
	printf("\n %d",*p);
	printf("\n %d",**p1);
	getch();
}



