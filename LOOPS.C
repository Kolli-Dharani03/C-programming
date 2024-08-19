/*print 1 to 10 numbers for loop
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	getch();
}
//while loop
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	clrscr();
	while(i<=100)
	{
		printf("%d\n",i);
		i++;
	}
	getch();
}
//do-while
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	clrscr();
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=100);
	getch();
}
//enter your name 100 times
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	for(i=1;i<=100;i++)
	{
		printf("dharani\n");
	}
	getch();
}*/



/*
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();
	for(i=1,j=0;i<=100 || j<=3;i++,j++)
	{
		printf("%d %d\n",i,j);
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	clrscr();
	for(i=1,j=0,k=3;i<=5,j<=6,k>1;i++,j++,k--);
	{
		printf("%d%d%d",i,j,k);
	}
	getch();
}*/

/*print table of a number
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
	getch();
}*/

/*print 1 to 100 numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
       //	printf("enter a number\n");
       //	scanf("%d",&i);
	for(i=1;i<=100;i++)
	{
		printf("%d\n",i);
	}
	getch();
}*/
/*
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&i);
	if(i<=100)
	{
		printf("%d\n",i);
	}
	getch();
}*/
/*print 1 to 10 numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	clrscr();
	printf("enter any numbers\n");
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=1;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d x %d =%d\n",n,i,n*i);
		i++;
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	while(i<=10)
	{
		printf("%d",i);
	}
	printf("end of the programs");
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	char ch='a';
	clrscr();
	while(ch)
	{
		printf("%d",ch);
		ch++;
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	clrscr();
	do
	{
		printf("dharani");
		i++;
	}
	while(i>0);
		printf("out of the loop");
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	clrscr();
	while(i>0)
	{
		printf("Dharani");
	}
	getch();
}
//even numbers and odd numbers
#include<stdio.h>
#include<conio.h>
main()
{
       //	int i=0;
       int i=1;
	clrscr();
	for( ;i<100;i++)
	{
		printf("%d\t",i);
		i=i+1;
		}
	getch();
}
//do-while
#include<stdio.h>
#include<conio.h>
main()
{
	//int i=0;
	int i=1;
	clrscr();
	do
	{
		printf("%d\t",i);
		i=i+2;
	}
	while(i<=100);
	getch();
}
//factorial
#include<stdio.h>
#include<conio.h>
main()
{
	int i,f=1;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&i);
	for( ;i>=1;i--)
	{
		printf("%dx",i);
		f=f*i;
	}
	printf("factorial=%d",f);
	getch();
}*/

 //break
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	for(i=0;i<=10;i++)
	{
		printf("%d\n",i);
		if(i==5);
		break;
	}
	printf("came outside of the loop i=%d",i);
	getch();
}
/*
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	for(i=0;i<=10;i++)
	{
		if(i==5)
		{
		continue;
		}
		printf("%d\n",i);
	}
	getch();
}*/