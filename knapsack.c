#include<stdio.h>
void main()
{
int i,j,n,m=15,cpy;float pw[7],x[7];float t1,prof=0.0;int t2,t3;
int p[7]={10,5,15,7,6,18,3};
int w[7]={2,3,5,7,1,4,1};
for(i=0;i<7;i++)
{
pw[i]=(double)p[i]/w[i];
printf("%f ",pw[i]);
}
//bubble sort p/w

for(i=0;i<7;i++)
{
for(j=0;j<7-1-i;j++)
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
for(i=0;i<7;i++)
printf("%.3f ",pw[i]);
printf("\nsorted weights\n");
for(i=0;i<7;i++)
printf("%d ",w[i]);
printf("\nsorted profits\n");
for(i=0;i<7;i++)
printf("%d ",p[i]);
cpy=m;
for(i=0;i<7;i++)
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
for(i=0;i<7;i++)
printf("%.3f\t",x[i]);
printf("\n");
for(i=0;i<7;i++)
printf("%d\t",w[i]);
printf("\nmaximum profit = %f\n",prof);
}
