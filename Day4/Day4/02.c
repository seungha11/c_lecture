#include <stdio.h>

int main_02(void)
{
	//���׿��� +,-,*,/
	int a = 6, b = 2;

	printf("���� %d+%d=%d\n",a, b, a+b);
	printf("���� %d-%d=%d\n", a, b, a - b);
	printf("���� %d*%d=%d\n", a, b, a * b);
	printf("������ %d/%d=%d\n", a, b, a / b);
	printf("%% ���� %d %% %d=%d", a, b, a % b); // %����:�������� ���

	return 0;
}