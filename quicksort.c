
#include<stdio.h>
void main()
{
int a[20],n,i;
printf("\n enter limit\n");
scanf("%d",&n);
printf("\n enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quicksort(a,0,(n-1));
//printar(a,n);
printf("sorted array is ");

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}

/*void printar(int a[],int n)
{
printf("sorted array is ");

for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}

}*/

void quicksort(int a[],int p,int r)
{
int q;
if(p<r)
{q=partition(a,p,r);
quicksort(a,p,(q-1));
quicksort(a,(q+1),r);}
}

int partition(int a[],int p,int r)
{
int t,x,temp,i,j;
x=a[r];
i=p-1;
for(j=p;j<=(r-1);j++)
{
if(a[j]<=x)
{i++;
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
temp=a[i+1];
a[i+1]=a[r];
a[r]=temp;
return(i+1);

}
