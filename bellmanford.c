#include <stdio.h>
int d[50][50],adj[50][50];
int i,j,k,p,q;
void main()
{
int i,j,k,n;
printf("\n enter the number of vertices :\n");
scanf("%d",&n);
printf("\n enter the %d * %d adjacency matrix :\n",n,n);
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		scanf("%d",&adj[i][j]);

printf("\nhere's the respective costs for each edge :\n");
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{if(adj[i][j]!=999 && adj[i][j]!=0)		
		printf("edges' cost (%d,%d) = %d\n",i,j,adj[i][j]);}

bellmanford(n);

}

void bellmanford(int n)
{
for(i=1;i<=n;i++)
 {	for(j=1;j<=n;j++)
		{
		d[1][j]=adj[1][j];
		if(i!=1)
  		d[i][j]=999;
		//printf("%d\t",d[i][j]);
		}
    //printf("\n");
 }

for(k=2;k<n;k++)
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			{if(adj[i][j]==999 || d[k-1][i]==999)
			continue;
			else if (d[k-1][i]+adj[i][j]<=d[k][j])
			d[k][j]=d[k-1][i]+adj[i][j]; }

printf("\nsolution matrix :\n");

for(i=1;i<n;i++)
 {	for(j=1;j<=n;j++)
		{printf("%d\t",d[i][j]);}
 printf("\n");
 }
}
