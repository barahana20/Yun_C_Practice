#include <stdio.h>

int main(void)
{
	int n=0, num=0;
	double insult=0, total=0;
	printf("�� ���� ����? : ");
	scanf("%d",&num);
	
	while(n<num)
	{
		++n;
		printf("%d ��° ���� �Է� ",n);
		scanf("%d",&insult);
		total+=insult;
	}
	printf("%d",total/2);
	return 0;
}
