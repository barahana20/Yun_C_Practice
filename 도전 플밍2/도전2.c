#include <stdio.h>

int main()
{
	int num, arr[100];
	int i=0;
	
	scanf("%d", &num);
	
	while(num!=1)
	{
		arr[i] = num%2;
		num = num / 2;
		i++;
	}
	arr[i]=1;
	
	for(int j=i ; j>=0 ; j--)
		printf("%d", arr[j]);

}
