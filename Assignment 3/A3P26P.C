/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
Date: 6th Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=0,y=0;
	clrscr();

	for (x=1;x<=5;x++)
	{
		for(y=1;y<=x;y++)
		{
			if(x %2==0)
			{
				if(y %2==0)
				{
					printf("%4d",1);
				}
				else
				{
					printf("%4d",0);
				}
			}
			else
			{
				if(y%2==0)
				{
					printf("%4d",0);
				}
				else
				{
					printf("%4d",1);
				}
			}
		}
		printf("\n");
	}
	getch();
}



