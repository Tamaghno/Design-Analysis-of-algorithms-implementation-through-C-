#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char T[100],P[100],pi[100];;
void KMP_Matcher()
{
    int n,m,q,i,j;
    n=strlen(T);
    m=strlen(P);
    Compute_Prefix();
    printf("Prefix function :\n");
    for(i=1;i<=m;i++)
        printf("%d ",pi[i]);
    printf("\n");
    q=0;
    for(i=1;i<=n;i++)
    {
        while(q>0 && P[q+1]!=T[i])
        {
        q=pi[q];
        if(P[q+1]==T[i])
            q=q+1;
        if(q==m)
        {
            printf("\nPattern occurs with shift s = %d",(i-m));
            q=pi[q];
        }
        }
    }
}
void Compute_Prefix()
{
    int m,k,q;
    m=strlen(P);
    pi[1]=0;
    k=0;
    for(q=2;q<=m;q++)
    {
        while(k>0 && P[k+1]!=P[q])
            k=pi[k];
        if(P[k+1]==P[q])
            k=k+1;
        pi[q]=k;
    }
}
int main()
{

    printf("\nEnter the text :");
    scanf("%s",T);
    printf("\nEnter the pattern :");
    scanf("%s",P);
    KMP_Matcher();
    return 0;
}

