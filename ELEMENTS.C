#include <stdio.h>
#include <conio.h>
void main()
{
	int num[5]={10,20,30,40,50},x=0;
	int *p=&num[0];
	clrscr();

	printf("\n print value using array elements:");
	
	for (x=0; x<=4; x++)
	{
		printf("\n %d",num[x]);
	}
	
	printf("\n print value using pointer:");
	
	for (x=0;x<=4;x++)
	{
		printf("\n %d",*(p+x));
	
	}
	getch();
}