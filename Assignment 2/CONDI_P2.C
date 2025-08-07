#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, num3, max;
    clrscr();

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2) ? 
            ((num1 > num3) ? num1 : num3) : 
            ((num2 > num3) ? num2 : num3);

    printf("The greatest number is: %d", max);

    getch();
}