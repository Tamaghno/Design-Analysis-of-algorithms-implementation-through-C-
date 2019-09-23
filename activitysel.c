#include<stdio.h>
void activities(int s[],int f[],int n)
{
int i,j;
printf("\n selected activities are :\n");
i=0;
printf("A%d\t",i+1);
for(j=1;j<n;j++)
{if(s[j]>=f[i])
{printf("A%d\t",j+1);
i=j;
}}}

void sort(int f[],int s[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
for(j=0;j<n-1-i;j++)
{
if(f[j]>f[j+1])
{
t=f[j];f[j]=f[j+1];f[j+1]=t;
t=s[j];s[j]=s[j+1];s[j+1]=t;
}
}
}
int main(){

int i,s[30],f[30],n;
printf("enter no of activities :\n");
scanf("%d",&n);
printf("enter start time :\n");
for(i=0;i<n;i++)
scanf("%d",&s[i]);
printf("enter finish time :\n");
for(i=0;i<n;i++)
scanf("%d",&f[i]);

sort(f,s,n);
activities(s,f,n);
return 0;
}
