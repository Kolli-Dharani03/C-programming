#include<stdio.h>
void main(){
int a,b,c;
printf("enter the three numbers a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
printf("%d is the largest number",a);
if(b>=a && b>=c)
printf("%d is the largest number",b);
if(c>=a && c>=b)
prinf("%d is the largest number",c);
}
