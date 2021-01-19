#include <stdio.h>

//삼항연산자
//조건문 ? 참일때, : 거짓일때

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