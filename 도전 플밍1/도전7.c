#include <stdio.h>

int main()
{
	int n, k=1, num;
	scanf("%d", &num);
	for(n=1 ; n<num ; n++)
	{
		k = k * 2;
		if(k<=num)
		continue;
		else
		break;
	}
	printf("\n������ �����ϴ� k�� �ִ��� %d", n-1);
	return 0;
}
