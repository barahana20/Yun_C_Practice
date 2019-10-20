#include <stdio.h>

void DesSort(int ary[], int len);

int main()
{
	int arr[100];
	int num;
	
	printf("얼마나 입력? : ");
	scanf("%d", &num);
	arr[num];
	for(int i=0 ; i<num ; i++)
	{
		printf("입력 : ");
		scanf("%d", &arr[i]);
	}	
	DesSort(arr, sizeof(arr)/sizeof(int));
	
	for(int i=0;i<num;i++)
		printf("%d ", arr[i]);
	
	return 0;
}

void DesSort(int ary[], int len)
{
	int i, j;
	int temp;
	
	for(i=0 ; i<len ; i++)
	{
		for(j=0 ; j<(len-i)-1 ; j++)
		{
			if(ary[j]<ary[j+1])
			{
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}
