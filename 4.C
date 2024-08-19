#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n,x=1;
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("Asc\n");
	a:
	printf("%3d",x);
	x++;
	if(x<=n)goto a;
	printf("\nDec\n");
	b:
	printf("%3d",n);
	n--;
	if(n>=1)goto b;


	getch();
}