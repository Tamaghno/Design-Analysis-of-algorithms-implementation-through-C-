#include <stdio.h>
int adj[50][50],visited[50];
int n;
void main()
{int i,j;
printf("\n enter the number of vertices :\n");
scanf("%d",&n);
printf("\n enter the %d * %d adjacency matrix :\n",n,n);
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		scanf("%d",&adj[i][j]);
for(i=1;i<=n;i++)
visited[i]=0;
dfs(1);
}

void dfs(int i)
{
int j;
printf("\n%d",i);
visited[i]=1;

for(j=1;j<=n;j++)
if(!(visited[j]) && adj[i][j]==1)
dfs(j);
}
