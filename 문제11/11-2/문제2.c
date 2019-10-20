#include <stdio.h>

int main()
{
	char voca[100], copy[100];
	int idx=0;
	
	scanf("%s", voca);
	while(voca[idx] != 0)
		idx += 1;
	idx = idx - 1;
	for(int n=0 ; n<=idx ; n++)
	{
		copy[n] = voca[idx-n];
	}
	printf("%s", copy);
	return 0;
}	
