#include <stdio.h>
//½ÇÆÐ 
void lang(int i)
{
	 
	char arr[i];
	for(int n=0 ; n<i ; n++) 
		scanf("%c", &arr[n]);
	for(int n=0 ; n<i ; n++)
		printf("%c", arr[n]);
}

int main()
{
	int i;
	scanf("%d", &i);
	printf("\n");
	lang(i);
	return 0;
}
