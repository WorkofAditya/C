#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    (num < 0) ? printf("%d is a negative number.", num) :
    (num > 0) ? printf("%d is a positive number.", num) :
                printf("%d is zero.", num);

    getch();
}