#include <stdio.h>

int main_02(void)
{
	int num = 0;
	printf("���ڸ� �Է��ϼ���. : ");
	scanf_s("%d", &num);

	//ȿ����b
	if (num % 2 )
	{
		printf("%d�� Ȧ���Դϴ�.\n\n", num);
	}
	else
	{
		printf("%d�� ¦���Դϴ�.\n\n", num);
	}
	
	/* ������b
	if (num % 2 == 0)                                   
	{
		printf("%d�� ¦���Դϴ�.\n\n", num);
	}
	else
	{
		printf("%d�� Ȧ���Դϴ�.\n\n", num);
	}*/

	return 0;
}