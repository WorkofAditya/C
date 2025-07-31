#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2, num3, num4;
    clrscr();

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                printf("%d is the greatest number.", num1);
            } else {
                printf("%d is the greatest number.", num4);
            }
        } else {
            if (num3 > num4) {
                printf("%d is the greatest number.", num3);
            } else {
                printf("%d is the greatest number.", num4);
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                printf("%d is the greatest number.", num2);
            } else {
                printf("%d is the greatest number.", num4);
            }
        } else {
            if (num3 > num4) {
                printf("%d is the greatest number.", num3);
            } else {
                printf("%d is the greatest number.", num4);
            }
        }
    }

    getch();
}
