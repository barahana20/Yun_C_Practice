#include <stdio.h>

void holsu(int ary[])
{
	printf("홀수 : ");
	for(int i=0;i<10;i++)
	{
		if(ary[i]%2 == 1)
			printf("%d ", ary[i]);
	}
}
void zzaksu(int array[])
{
	printf("\n¦�� : ");
	for(int i=0 ;i<10 ;i++)
	{
		if(array[i]%2 == 0)
			printf("%d ", array[i]);
	}
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		printf("insult : ");
		scanf("%d", &arr[i]);
	}
	holsu(&arr[0]);
	zzaksu(&arr[0]);
	return 0;
}
