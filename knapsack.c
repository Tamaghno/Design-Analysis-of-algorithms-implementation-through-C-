#include<stdio.h>
void main()
{
int i,j,n,m,cpy;float pw[20],x[20],p[20],w[20];float t1,prof=0.0;int t2,t3;

printf("enter the no of weights : ");
scanf("%d",&n);
printf("enter the profits :\n");
for(i=0;i<n;i++)
scanf("%f",&p[i]);
printf("enter the weights :\n");
for(i=0;i<n;i++)
scanf("%f",&w[i]);
printf("enter capacity : ");
scanf("%d",&m);


for(i=0;i<n;i++)
{
pw[i]=(double)p[i]/w[i];
printf("%f ",pw[i]);
}
//bubble sort p/w

for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(pw[j]<=pw[j+1])
{
{t1=pw[j];
pw[j]=pw[j+1];
pw[j+1]=t1;}

{t2=w[j];
w[j]=w[j+1];
w[j+1]=t2;}

{t3=p[j];
p[j]=p[j+1];
p[j+1]=t3;}
}}}
printf("\nsorted profits/weights\n");
for(i=0;i<n;i++)
printf("%.3f ",pw[i]);
printf("\nsorted weights\n");
for(i=0;i<n;i++)
printf("%f ",w[i]);
printf("\nsorted profits\n");
for(i=0;i<n;i++)
printf("%f ",p[i]);
cpy=m;
for(i=0;i<n;i++)
{
if(m!=0 && m<=cpy &&w[i]<=m)
{
m=m-w[i];
x[i]=1;
prof=(double)(prof+p[i]);}
else if(w[i]>m)
{
x[i]=(double)m/w[i];
prof=(double)(prof+(double)(x[i]*p[i]));
m=m-(x[i]*w[i]);}
}
printf("\nCorresponding values of x w.r.t weights used \n");
for(i=0;i<n;i++)
printf("%.3f\t",x[i]);
printf("\n");
for(i=0;i<n;i++)
printf("%f\t",w[i]);
printf("\nmaximum profit = %f\n",prof);
}
