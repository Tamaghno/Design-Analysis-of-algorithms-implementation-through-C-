#include <stdio.h>
int cost[50][50],sln[50][50];
int i,j,k,p,q;
void main()
{
int i,j,k,n;
printf("\n enter the number of vertices :\n");
scanf("%d",&n);
printf("\n enter the %d * %d cost matrix :\n",n,n);
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		scanf("%d",&cost[i][j]);

printf("\nhere's the respective costs for each edge :\n");
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{if(cost[i][j]!=999 && cost[i][j]!=0)		
		printf("edges' cost (%d,%d) = %d\n",i,j,cost[i][j]);}

floydwarshall(n);

}

void floydwarshall(int n)
{
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		sln[i][j]=cost[i][j];

for(k=1;k<=n;k++)
{	for(i=1;i<=n;i++)
	{	for(j=1;j<=n;j++)
			{
			p=sln[i][j];
			q=sln[i][k]+sln[k][j];
			if(p<q)
			sln[i][j]=p;
			else
			sln[i][j]=q;			
			}
	}
printf("here's the %d solution matrix :\n",k);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
			printf("%d\t",sln[i][j]);
			}
			printf("\n");
		}

}

}
