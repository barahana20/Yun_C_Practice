#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int n=0;
    int num=0;
    int i;
 
 scanf("%d", &i);
 printf("%d 까지의 소수를 출력합니다. \n", i);
 for(int n ; n<1000000 ; n++)
 {}
 
    for(a=2; a<=i; a++)
    {
        for(b=1; b<=a; b++)
        {
            if(a%b==0)
            n+=1;
        }
        if(n==2)
        {
        	num+=1;
            printf("%d \n", a);
        }
        n=0;
        /*if(num=101)
        {	
           	printf("%d@@ \n", a);
     	}*/
    }
    printf("finish");
 return 0;
}
