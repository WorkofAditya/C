#include <stdio.h>
#include <conio.h>

void studdetail(char name[3][50], int mark[3][4], int total[3], float per[3], char sub[4][10]);

void main() {
    char name[3][50] = {"", "", ""};
    char sub[4][10] = {"c", "html", "cf", "maths"};
    int mark[3][4] = {{0}};
    int total[3] = {0};
    float per[3] = {0.0};
    int x, y;

    clrscr();
    printf("\nInput student details:\n");

    for (x = 0; x < 3; x++) {
	printf("\nStudent %d name: ", x + 1);
	fflush(stdin);
	scanf(" %[^\n]s", name[x]);

	for (y = 0; y < 4; y++) {
	    printf("%s = ", sub[y]);
	    scanf("%d", &mark[x][y]);
	    total[x] += mark[x][y];
	}

	per[x] = total[x] / 4.0;
    }

    studdetail(name, mark, total, per, sub);
    getch();
}

void studdetail(char name[3][50], int mark[3][4], int total[3], float per[3], char sub[4][10]) {
    int x, y;
    printf("\n\nStudent Details:\n");
    for (x = 0; x < 3; x++) {
	printf("\nStudent %d Name: %s", x + 1, name[x]);

	for (y = 0; y < 4; y++) {
	    printf("\n%s = %d", sub[y], mark[x][y]);
	}
	printf("\nTotal = %d", total[x]);
	printf("\nPercentage = %.2f\n", per[x]);
    }
}
