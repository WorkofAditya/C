#include<stdio.h>
#include<conio.h>

void main ()
{
    // variable declarartion
    // starting value (intial or intitialization)
    int x=1,y=1;
    clrscr();


    while(y<=5)
  {
       x=1;

       while(x<=5)
  {
      printf ("%d ",x);

      x=x+1;
  }

    printf ("\n");
    y=y+1;
 }
    getch();
 }

