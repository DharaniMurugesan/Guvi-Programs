#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
char a[10],b[10],c[10];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%c",&a[i]);
for(i=0;i<n;i+2)
{
for(j=0;j<n;j++)
{
b[j]=a[i];
}
}
for(i=1;i<n;i+2)
{
for(j=0;j<n;j++)
{
c[j]=a[i];
}
}
for(i=0;i<n;i++)
{
printf("%c%c",b[i],c[i]);
}
getch();
}
