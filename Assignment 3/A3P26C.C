/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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

		for(y=1; y<=x; y++)
		{
			printf("%2d",y);
		}
		printf("\n");
	}
	getch();
}

