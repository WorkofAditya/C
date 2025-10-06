/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int x, y;
	clrscr();
	for(x = 5; x >= 1; x--)
	{
		for(y = 5; y >= x; y--)
		{
			printf("%d ", x);
		}
		printf("\n");
	}
	getch();
}