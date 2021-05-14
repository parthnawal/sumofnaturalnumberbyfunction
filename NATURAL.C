#include<stdio.h>
int main()
{
int a,b;
clrscr();
printf("Sum of Enter Nautral Number : ");
scanf("%d", &a);
b=sum(a);
printf("Sum is %d", b);
getch();
}
int sum(int c)
{
int s;
if(c==1)
  return(c);
else
  s=c+sum(c-1);
  return (s);
}