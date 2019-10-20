#include <stdio.h>

int main()
{
	int arr[5], i, max, min, sum=0, n=0, a=0;
	for(i=0 ; i<5 ; i++)
	{
		printf("insult : ");
		scanf("%d", &arr[i]);
	}
	for(i=0 ; i<5 ; i++)
	{
		for(n=0 ; n<5 ; n++)
		{
			if(arr[i]>=arr[n])
			a+=1;
			if(a==5)
			{
				max = arr[i];
				break;
			}
		}
		a=0;
	}
	for(i=0 ; i<5 ; i++)
	{
		for(n=0 ; n<5 ; n++)
		{
			if(arr[i]<=arr[n])
			a+=1;
			if(a==5)
			{
				min = arr[i];
				break;
			}		}
		a=0;
	}
	for(i=0 ; i<5 ; i++)
		sum += arr[i];
	printf("\nmax : %d, min : %d, sum : %d", max, min, sum);
	return 0;
}
