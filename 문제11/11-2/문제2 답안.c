#include <stdio.h>

int main()
{
	char voca[100];
	int idx=0, i;
	char temp;
	
	scanf("%s", voca);
	while(voca[idx] != 0)
		idx += 1;
	idx = idx - 1;
	
	for(i=0 ; i<=idx/2 ; i++)
	{
		temp = voca[i];
		voca[i] = voca[idx-i];
		voca[idx-i] = temp;
	}
	printf("%s", voca);
	return 0;
}