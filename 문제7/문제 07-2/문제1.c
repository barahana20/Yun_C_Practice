#include <stdio.h>

int main()
{
	int n=0,num=0,total=0;
	while(n<5)
	{
		printf("���� �Է� : ");
		scanf("%d",&num);
		n++;
		total+=num;
		while(num<1)
		{
			printf("���� ���Է� : ");
			scanf("%d",&num);
			total+=num;
		}
	}
	printf("%d",total);
	return 0;
}
	
