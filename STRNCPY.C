#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()

{
   char str1[50]=" ",str2[50]=" ";

   clrscr();
   printf("\n input first string:");
   scanf("%[^\n]s",str1);
   strncpy(str2,str1,3);
   printf ("\n string 1 = %s",str1);
   printf ("\n string 2 = %s",str2);

getch();
}