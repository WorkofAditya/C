   #include <stdio.h>
   #include <conio.h>
   void series();
   void main()
   {

	clrscr();
	series();
	getch();
   }
   void series()
   {
	static int x=1;
	if(x<=5)
	{
		printf("\n %d",x);
		x++;
		series();
	}
       }