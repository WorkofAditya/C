#include<stdio.h>
#include<conio.h>

void studentdetail(char name[3][50],
int mark[3][4],
int total[3],
float per[3],
char sub[5][10];

void main()

{
	char name[3][5] = {" ", " ", " "},
	sub[4][10] = {"C","HTML","CF","MATH");
	int marks[3][4] = {{0},{0},{0}},
	total[3] = {0},x = 0, y = 0;
	float per[3] = {0, 0};
	clrscr();

	printf("\n input student's details: ");
	for(x=0; x<=2; x++)
	{
		printf("\n student %d name = ",x + 1);
		fflush(stdin);
		scanf("%[^\n]s",name[x]);

		for(y=0; y<=3; y++)
		{
			printf("%s = ",sub[5]);
			fflush(stdin);
			scanf("%d",marks[x][y]);
			total[x] = total[x] + marks[x][y];
		}
		per[x] = total[x]/4.0;
		}
}
