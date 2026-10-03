#include<stdio.h>
int main(0
{
int n,i,count=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(n>1&&count=0)
{
printf("Prime\n");
}
else
{
printf("Not Prime");
}
return 0;
}
