#include <stdio.h>

int main()
{
	int first, second;
	
	printf("�ΰ��� ���� �Է� : ");
	scanf("\n%d %d",&first,&second);
	
	if(first<second)
		printf("%d",second-first);
	else
		printf("%d",first-second);
	
	return 0;
}
