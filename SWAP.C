#include<stdio.h>
#include<conio.h>

void swap(int*x,int*y);

void main ()
{
   int x=0,y=0;
   clrscr();
   printf("\n input two values:");
   scanf("%d %d",&x,&y);
   swap(&x,&y);
   printf("\nx=%d",x);
   printf("\n y=%d",y);
   getch();
}
void swap(int*x,int*y)
{
    int z=0;
    z=*x;
    *x=*y;
    *y=z;
}


