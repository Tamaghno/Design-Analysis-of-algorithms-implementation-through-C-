#include<stdio.h>
int g[50][50],x[50];

void main()
{
    int n,e,i,j,k,l;
    printf("enter no. of vertices :");
    scanf("%d",&n);
    printf("enter number of edges :");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        g[i][j]=0;
    }
    printf("enter indices where value is 1 :\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d",&k,&l);
        g[k][l]=1;
        g[l][k]=1;
    }
    for(i=0;i<n;i++)
    next_color(i);

    printf("color of vertices ->\n");
    for(i=0;i<n;i++)
    printf("vertex [%d] : %d\n",i+1,x[i]);

    return 0;
}
int next_color(int k)
{
    int i,j;
    x[k]=1;
    for(i=0;i<k;i++)
    {
        if(g[i][k]!=0 && x[k]==x[i])
        x[k]=x[i]+1;

    }
}