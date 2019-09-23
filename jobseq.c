#include<stdio.h>
int sln[50];
struct job{
int profit,dline;};

void main()
{
struct job ini[50];
struct job temp;
int i,j,n;
int p=0;
printf("\n number of jos :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n profit :");
scanf("%d",&ini[i].profit);
printf("\n deadline :");
scanf("%d",&ini[i].dline);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(ini[j].profit<ini[j+1].profit)
{temp=ini[j]; ini[j]=ini[j+1]; ini[j+1]=temp;}
}
}
for(i=0;i<n;i++)
{
for(j=ini[i].dline-1;j>=0;j--)
{
if(sln[j]==0)
{sln[j]=ini[i].profit;
p+=ini[i].profit;
break;
}
}
}
printf("solutions set :");
for(i=0;i<n;i++)
printf("%d\t",sln[i]);
printf("\n profit : %d",p);
}
