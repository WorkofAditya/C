#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
  char ch=' ';
  clrscr();
  printf("\n input first string :");
  scanf ("%c",&ch);
  if (isalnum(ch))
  {
    printf("\n%c is an a alphabet or a num",ch);
    }
    else
    {
      printf("\n%c is a stmbol or a space",ch);
      }
      getch();
}