#include <stdio.h>

int main()
{
	int a=1, b=1, c=1, i;
	for(a=1 ; a<5 ; a++)
	{
		for(b=1 ; b<5 ; b++)
		{
			for(c=1 ; c<5 ; c++)
			{
				if(500*a + 700*b + 400*c == 3500)
				printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n",a, b, c);	
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");
	return 0;
}
	
