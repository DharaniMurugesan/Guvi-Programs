#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,n;
char a[10],b[10],c[10];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%c",&a[i]);
b=strrev(a);
printf("reverse:%s",b);
for(i=0;i<n;i++)
{
if(b[i]!='a'||b[i]!='A'||b[i]!='e'||b[i]!='E'||b[i]!='i'||b[i]!='I'||b[i]!='o'||b[i]!='O'||b[i]!='u'||b[i]!='U')
{
c[i]=b[i];
}
printf("Vowels removed%s",c);
getch();
}
