#include<stdio.h>
void main()
{
char a[10];
scanf("%s",a);
if(a=="monday"||a=="tuesday"||a=="wednesday"||a=="thursday"||a=="friday"||a=="saturday")
{
if(a=="sunday")
printf("false");
else
printf("true");
}
else
printf("invalid");
}
