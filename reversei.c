#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,a=0;
clrscr();
scanf("%d",&n);
while(n>0)
{
a=a*10+n%10;
n=n/10;
}
printf("the reverse of an integer is:%d",a);
getch();
}
