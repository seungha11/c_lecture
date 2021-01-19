#include <stdio.h>

int main_02(void)
{
	int num = 0;
	printf("숫자를 입력하세요. : ");
	scanf_s("%d", &num);

	//효율성b
	if (num % 2 )
	{
		printf("%d는 홀수입니다.\n\n", num);
	}
	else
	{
		printf("%d는 짝수입니다.\n\n", num);
	}
	
	/* 가독성b
	if (num % 2 == 0)                                   
	{
		printf("%d는 짝수입니다.\n\n", num);
	}
	else
	{
		printf("%d는 홀수입니다.\n\n", num);
	}*/

	return 0;
}