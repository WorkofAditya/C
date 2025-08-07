#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;
    clrscr();
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    (num1 > num2) ?
        printf("First number is greater than second number") :
    (num1 < num2) ?
        printf("First number is less than second number") :
        printf("Both numbers are equal");

    getch();
}