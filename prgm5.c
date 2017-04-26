#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
double n1,n2,n3;
printf("enter the n:");
scanf("%lf %lf %lf",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
{
printf("%d",&n1);
}
if(n2>=n1 && n2>=n3)
{
printf("%d",&n2);
}
if(n3>=n1 && n3>=n2)
{
print("%d",&n3);
}
getch();
}
