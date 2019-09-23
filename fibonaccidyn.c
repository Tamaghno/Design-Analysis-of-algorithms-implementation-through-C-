#include<stdio.h>

int a[100];
int fibo(int n)
{
if(a[n]==-1)
{
if(n<=1)
a[n]=n;
else
a[n]=fibo(n-1)+fibo(n-2);
}
return a[n];
}
void main()
{
int n,i;
printf("\n enter value of n:");
scanf("%d",&n);
for(i=0;i<100;i++)
a[i]=-1;
for(i=1;i<=n;i++)
printf("%d",fibo(i-1));
}
