/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
Date: 4th Dec
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=0,y=0;
	clrscr();

	for(x=1;x<=5;x++)
	{
		for(y=x; y>=1; y--)
		{
			printf("%2d",y);
		}
		printf("\n");
	}
	getch();

}

