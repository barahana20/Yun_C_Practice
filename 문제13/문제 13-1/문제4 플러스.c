#include <stdio.h>

int main()
{
	int *arr[100];
	int *fptr, *bptr;
	int n, i, temp;
	printf("�Է� ������ŭ : ");
	scanf("%d", &n);
	arr[n];
	printf("�Է� : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]); //�Է� �޴� �� 
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
	
