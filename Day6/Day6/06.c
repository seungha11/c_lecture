#include <stdio.h>

//while / for / do while
//while(����) {���౸��}
//for(1�Ҵ� ; 2���� ; 4����) {3���౸��}  1-2-3-4 ������ �����
//do{���౸��} while(����);

int main_06(void)
{
	/*
	int i = 0;

	//while�� ����
	while (i < 10)
	{
		printf("i=%d\n", i);
		i++;
	}

	printf("\n\n");
	//i == 10
	i = 0;

	//do while�� ����
	do
	{
		printf("i=%d\n", i);
		i++;
	} while (i < 10);

	printf("\n\n");

	//for�� ����
	for (i = 0; i < 10; i++)
	{
		printf("i=%d\n", i);
	}

	//���� ���� ����
	int b = 0;
	for (;;)
	{
		if (b >= 10) break;
		printf("b=%d\n",b);
		b++
	}
	*/

	int i = 0;
	//break ����
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

	printf("i�� �������� %d�Դϴ�.\n", i);

	return 0;
}