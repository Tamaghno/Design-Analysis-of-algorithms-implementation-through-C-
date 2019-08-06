
#include <stdio.h> 
#define COINS 9 
#define MAX 20 

// All denominations of Indian Currency 
int coins[COINS] = { 1, 2, 5, 10, 20, 50, 100, 200, 2000 }; 

void findMin(int cost) 
{ 
	int coinList[MAX] = { 0 }; 
	int i, k = 0; 

	for (i = COINS - 1; i >= 0; i--) { 
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

int main(void) 
{ 
	int n = 195; // net amount of change i waant 

	printf("Following is minimal number of change for %d: ", n); 
	findMin(n); 
	return 0; 
} 


