#include <stdio.h>

//while / for / do while
//while(조건) {실행구문}
//for(1할당 ; 2조건 ; 4증감) {3실행구문}  1-2-3-4 순서로 진행됨
//do{실행구문} while(조건);

int main_06(void)
{
	/*
	int i = 0;

	//while문 예제
	while (i < 10)
	{
		printf("i=%d\n", i);
		i++;
	}

	printf("\n\n");
	//i == 10
	i = 0;

	//do while문 예제
	do
	{
		printf("i=%d\n", i);
		i++;
	} while (i < 10);

	printf("\n\n");

	//for문 예제
	for (i = 0; i < 10; i++)
	{
		printf("i=%d\n", i);
	}

	//위와 같은 예제
	int b = 0;
	for (;;)
	{
		if (b >= 10) break;
		printf("b=%d\n",b);
		b++
	}
	*/

	int i = 0;
	//break 예제
	for (; i <= 100; i++)
	{
		if (i == 51) break;
		printf("i = %d\n", i);
	}

	//continue
	for (i=0; i <= 100; i++)
	{
		if (i>=30 && i<=50) continue;
		printf("i = %d\n", i);
	}

	printf("i의 최종값은 %d입니다.\n", i);

	return 0;
}