/*print 50 times
#include<stdio.h>
#include<conio.h>
main()
{
	int a=1;
	clrscr();
	y:
	printf("%d",&a);
	if(a<=50)goto y;
	getch();
}*/

/*mathematical table
#include<stdio.h>
#include<conio.h>

main()
{
	int n,i=1;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	y:
	printf("%dx%d=%d\n",n,i,n*i);
	i++;
	if(i<=10)goto y;
	getch();
}*/

/*power
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n,p,x=1,y;
	clrscr();
	printf("enter any numbers\n");
	scanf("%d",&n);
	printf("enter power value\n");
	scanf("%d",&p);
	a:
	y=pow(x,p);
	printf("%d power %d=%d\n",x,p,y);
	x++;
	if(x<=n)goto a;
	getch();
}*/

/*ascending order
#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,b;
	clrscr();
	printf("enter any numbers\n");
	scanf("%d",&b);
	printf("ascending order\n");
	x:
	printf("%2d",a);
	a++;
	if(a<=b)goto x;
       //	printf("decending order\n");
	//y:
       //	printf("%2d",b);
	//b--;
	//if(b>=a)goto y;
	getch();
}*/

//decending order
#include<stdio.h>
#include<conio.h>
main()
{
	int a,d=1;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&a);
	printf("descending order\n");
	b:
	printf("%2d",a);
	a--;
	if(a>=d)goto b;
	getch();
}
