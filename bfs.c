#include <stdio.h>
int adj[50][50],visited[50],q[50];
int i,n,j,f=0,r=-1;
void main()
{int i,j,v;
printf("\n enter the number of vertices :\n");
scanf("%d",&n);
printf("\n enter the %d * %d adjacency matrix :\n",n,n);
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		scanf("%d",&adj[i][j]);
for(i=1;i<=n;i++)
{
visited[i]=0;
q[i]=0;
}

printf("\n which vertex to start :\n");
scanf("%d",&v);
bfs(v);

printf("\n traversal order is :");
for(i=1;i<=n;i++)
{if(visited[i])
printf("%d\t",i);
else
{printf("bfs not possible");
break;}
}

}

void bfs(int v)
{
for(i=1;i<=n;i++)
  {
	if(!visited[i] && adj[v][i]==1)
		q[++r]=i;
  } 
if(f<=r)
  {
	visited[q[f]]=1;
	bfs(q[f++]);
  }
}
