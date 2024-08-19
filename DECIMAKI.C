/*number is even or odd
#include<stdio.h>
#include<conio.h>
main()
{	int n;
	clrscr();
	printf("enter n value");
	scanf("%d",&n);
		if(n%2==0)
		{
		 printf("%d is even \n");
		}
		else
		{
		 printf("%d is odd");
		}
	getch();
}*/

/*greatest of 2 numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
		if(a>b)
		{
			printf("a is greatest",&a);
		}
		else
		{
			printf("b is greatest",&b);

		}
	getch();

}*/

/*greatest 3 numbers using nested if-> if lo if
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
		if(a>b){
		   if(a>c){
			printf("a is greatest",&a);
		   }
		   else{
			printf("c is greatest",&c);
		   }
		}
		else{
		  if(b>c){
			printf("b is greatest",&b);
		  }
		  else{
			printf("wrong answer");
		  }
		}
	getch();
}*/

/*ternary operator
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter a,b\n");
	scanf("%d%d",&a,&b);
	c=a>b?c:b;
	printf("greatest is %d",c);
	getch();

}*/

/*find grades

#include<stdio.h>
#include<conio.h>
main()
{
	int sub1,sub2,sub3,sub4,sub5,sub6;
	float avg;
	clrscr();
	printf("print subject marks");
	scanf("%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
	avg=sub1+sub2+sub3+sub4+sub5+sub6/6;

		if(sub1<35||sub2<35||sub3<35||sub4<35||sub5<35||sub6<35)

			printf("Fail/F grade");


		else
			if(avg>70)

				printf("A grade");

		else
			if(avg>60&&avg<70)

				printf("B grade");

		else
			if(avg>50&&avg<60)

				printf("C grade");

		else
			if(avg>40&&avg<50)

				 printf("D grade");

		else
			if(avg<35)

				printf("E");
    getch();
}*/

/*Switch

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a;
	clrscr();
	printf("enter any characters a____z\n");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("print vowels\n");break;
		default:
		printf("print consonants");break;
	}
	getch();
}*/


