#include<stdio.h>
int x[50];

void main()
{
    int n;
    printf("enter the number of queens :");
    scanf("%d",&n);
    nqueen(1,n);
}
void nqueen(int k,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                printf("\n");
                for(i=1;i<=n;i++)
                printf("%d",x[i]);
            }
            else
            {
                nqueen(k+1,n);
            }
            
        }
    }
}
int place(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
    {
        if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
        return 0;
    }
    return 1;
}