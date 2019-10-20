#include <stdio.h>

int main()
{
	char voca[100];
	int idx; 
	char max;
	
	scanf("%s", voca);
	while(voca[idx] != 0)
		idx += 1;
	idx = idx - 1;
	max = voca[0];
	for(int i=0 ; i<=idx ; i++)
	{
		if(max < voca[i])
			max = voca[i];
	}
	printf("%c", max);
	return 0;
}
