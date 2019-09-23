
#include <stdio.h> 

int coins[100];
int COINS;



void findMin(int cost) 
{ 
	int coinList[100]; 
	int i, k = 0; 

	for (i = 0; i < COINS ; i++) { 
		while (cost >= coins[i]) { 
			cost -= coins[i]; 
			coinList[k++] = coins[i]; // add coin in the list 
		} 
	} 

	for (i = 0; i < k; i++) { 
		printf("%d ", coinList[i]);
	} 
	return; 
} 


sort(int c[])
{
int t;
for(int i=0;i<COINS;i++)
for(int j=0;j<COINS-1-i;j++)
{
if(c[j]<c[j+1])
{
t=c[j]; c[j]=c[j+1]; c[j+1]=t;
}
}
}

int main() 
{ 
	int n,i;
	printf("enter number of coins :\n");
	scanf("%d",&COINS);
	printf("enter the coins :\n");
	for(i=0;i<COINS;i++)
	scanf("%d",&coins[i]);
	printf("enter change : ");
	scanf("%d",&n);
	sort(coins);	
	printf("Following is minimal number of change for %d: ", n); 
	findMin(n); 
	return 0; 
} 


