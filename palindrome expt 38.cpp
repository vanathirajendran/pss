#include<stdio.h>
int main()
{
int num,x,t,sum=0;
printf("Enter a number:");
scanf("%d",&num);
t= num;
while(t!=0)
{
x=t%10;
sum=sum + x;
t=t/10;
}
if(num==sum)
{
printf ("%d is an palindrome Number.", num);
}
else
{
printf ("%d is not an palindrome Number.", num);
}
}
