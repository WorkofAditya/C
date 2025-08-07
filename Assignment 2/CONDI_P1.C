#include <stdio.h>
#include <conio.h>


void main()
{
    int a, b, greater;
    clrscr();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    greater = (a > b) ? a : b;

    printf("The greater number is: %d\n",greater);

    getch();
}