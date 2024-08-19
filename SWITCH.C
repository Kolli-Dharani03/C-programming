#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,ch;
	clrscr();
	printf("Enter a b values\n");
	scanf("%d%d",&a,&b);
	printf("Enter Choice\n");
	printf("================================\n");
	printf("Press 1 for Add\n");
	printf("Press 2 for Sub\n");
	printf("Press 3 for Mul\n");
	printf("================================\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Sum is %d",a+b);break;
		case 2:printf("Sub =%d",a-b);break;
		case 3:printf("Multipication is %d",a*b);break;
		default:printf("Wrong choice");break;
	}
	getch();
}
