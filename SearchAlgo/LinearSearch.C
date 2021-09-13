
// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <stdio.h>
//search function 
int search(int arr[], int n, int x){
    for(int i=0; i<n; i++)
        if (arr[i]==x)
         return i;
    return -1;
}
//main code
int main(void)
{
	int n, x, arr[100];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    printf("Enter a value:");
	    scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched:");
	scanf("%d",&x);
	// Function call
	int result = search(arr, n, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}

