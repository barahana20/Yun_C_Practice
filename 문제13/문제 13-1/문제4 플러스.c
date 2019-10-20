#include <stdio.h>

int main()
{
	int *arr[100];
	int *fptr, *bptr;
	int n, i, temp;
	printf("입력 받을만큼 : ");
	scanf("%d", &n);
	arr[n];
	printf("입력 : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]); //입력 받는 곳 
	fptr = arr[0], bptr = arr[n-2];
	for(i=0;i<n/2;i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr--;
	}
	for(i=0 ; i<n-1 ; i++)
		printf("%d", arr[i]);
	return 0;
}	
	
