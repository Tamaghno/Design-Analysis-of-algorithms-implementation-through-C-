// C program to implement recursive Binary Search 
#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		if (arr[mid] == x) 
			return mid; 

		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		return binarySearch(arr, mid + 1, r, x); 
	} 
	return -1; 
} 

int main(void) 
{ 
	int n,ar[50],x;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	printf("enter the array elements :\n");
	for(int i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("enter the element to be searched : ");
 	scanf("%d",&x); 
	int result = binarySearch(ar, 0, n - 1, x); 
	(result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",result); 
	return 0; 
} 

