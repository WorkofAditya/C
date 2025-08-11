   #include <stdio.h>
   #include <conio.h>
   void main()
   {
	int num=0, mul=1;
	clrscr();
	do
	{
	   scanf("%d",&num);
	   if(num==0)
	   {
	      break;
	   }

	   mul=mul*num;
	}
	while(num!=0);
	printf("\n multiplication=%d",mul);
	getch();
   }