#include <stdio.h>

int main()
{
	char voca[100];
	int idx=0;
	
	scanf("%s", voca);
	while(voca[idx] != 0)
		idx++;
	printf("%d", idx);
	return 0;
}
