#include <stdio.h>

int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int *front=&arr[5], *back=&arr[2];
	
	for(int i=0 ; i<3 ; i++)
		printf("%d", front[-i]);
	for(int i=0 ; i<3 ; i++)
		printf("%d", back[-i]);
	return 0;
}
