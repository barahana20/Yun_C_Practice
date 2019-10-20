#include <stdio.h>

int main()
{
	int p, q, num;
	scanf("%d", &num);
	for(p=num ; p>0 ; p--)
	{
		for(q=1 ; q<=num ; q++)
		{
			if(p*q == num)
			{
				printf("%d x %d = %d\n", p, q, num);
				break;
			}
			else if(p<q)
			break;
		}
	}
	printf("finish.");
	return 0;
}
