#include <stdio.h>

int main()
{
	char arr[50];
	int idx=0, n=0;
	
	scanf("%s", arr);
	while(idx<50)
	{
		if(arr[idx] == 0)
		break;
		idx += 1;
		n++;
	}
	printf("%d", n);
	return 0;
}
	
