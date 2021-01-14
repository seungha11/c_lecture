#include <stdio.h>

int main_02(void)
{
	//ÀÌÇ×¿¬»ê +,-,*,/
	int a = 6, b = 2;

	printf("µ¡¼À %d+%d=%d\n",a, b, a+b);
	printf("»¬¼À %d-%d=%d\n", a, b, a - b);
	printf("°ö¼À %d*%d=%d\n", a, b, a * b);
	printf("³ª´°¼À %d/%d=%d\n", a, b, a / b);
	printf("%% ¿¬»ê %d %% %d=%d", a, b, a % b); // %¿¬»ê:³ª¸ÓÁö°ª Ãâ·Â

	return 0;
}