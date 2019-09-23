#include<stdio.h>
int bc[50][50];
int bino_co(int n, int k)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(j==0)
bc[i][j]=1;
else if(i==0)
bc[i][j]=1;
else if (i==j)
bc[i][j]=1;
else
{
if(bc[i-1][j]!=0 && bc[i-1][j-1]!=0)
bc[i][j]=bc[i-1][j]+bc[i-1][j-1];
else
bc[i][j]=bino_co(i-1,j-1)+bino_co(i-1,j);
}
}
}
return bc[n][k];
}
void main()
{
int n,k,i,j;
printf("\n enter row number:");
scanf("%d",&n);
bino_co(n,n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
printf("%d",bc[i][j]);
printf("\n");
}
}
