#include <stdio.h>

//���׿�����
//���ǹ� ? ���϶�, : �����϶�

int main_05(void)
{
	int num = 0, num2 = 1;
	int result = num > num2 ? 10 : -1;
	
	if (num > num2)
	{
		result = 10;
	}
	else
	{
		result = -1;
	}

	printf("%d\n",result);

	return 0;
}