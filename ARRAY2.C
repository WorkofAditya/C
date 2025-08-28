/*
This program can take five numbers from user put them into array and print sum, average minimum and maximum values
Date: 28th Aug 2015
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int num[5],x=0, sum=0, min=0, max=0;
	float avg=0.0;
	clrscr();
	printf("\n input five numbers: ");

	for (x=0;x<=4;x++)
	{
		scanf("%d",&num[x]);
		sum=sum+num[x];
	}

	avg=(float)sum/x;

	for (x=0; x<=4;x++)
	{
		printf("\n %d", num[x]);

	}

	min=num[0];

	for(x=1;x<=4;x++)
	{
		if(max<num[x]);
		{
			max=num[x];
		}

	}

	printf("\n sum=%d",sum);
	printf("\n average=%2f",avg);
	printf("\n maximum=%d",max);
	printf("\n minimum=%d",min);

   getch();

}