#include <stdio.h>

int main()
{
	int n;
	char arr[] = {'"','G','o','o','d',' ','t','i','m','e','"'};
	n = sizeof(arr) / sizeof(char);
	for(int i; i<n ; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
	
