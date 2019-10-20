#include <stdio.h>

int main(void)
{
	int a,b,z,e,area;
	printf("ÁÂ »ó´ÜÀÇ x, y ÁÂÇ¥ : ");
	scanf("%d %d",&a, &b);
	printf("ÁÂ »ó´ÜÀÇ x, y ÁÂÇ¥ : %d %d\n",a,b);
	printf("¿ì ÇÏ´ÜÀÇ x, y ÁÂÇ¥ : ");
	scanf("%d %d",&z, &e);
	printf("¿ì ÇÏ´ÜÀÇ x, y ÁÂÇ¥ : %d %d\n",z,e);
	area=(z-a)*(e-b);
	printf("µÎ Á¡ÀÌ ÀÌ·ç´Â Á÷»ç°¢ÇüÀÇ ³ÐÀÌ´Â %d ÀÔ´Ï´Ù.",area);
	return 0;
}
