#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>

/*
	switch(변수/값)
	{
	case 값1:
		//변수/값 == 값1 실행

	case 값2:
		//변수/값 == 값2 실행
	break;
	......
	default:
		//위의 case 구문에서 만족하는(==) 내용이 없을 때
	}

	if(변수/값 == 값1)
	{
		//변수/값 == 값1 실행
	}
	else if(변수/값 == 값2)
	{
		//변수/값 == 값2 실행
	}
	else
	{
		//위의 case 구문에서 만족하는(==) 내용이 없을 때
	}
*/

int main_04(void)
{
	int num;

	printf("몇 번 메뉴를 선택하시겠습니까?\n");
	printf("\t(1) 짜장면\n");
	printf("\t(2) 탕수육\n");
	printf("\t(3) 짬뽕\n");
	printf("번호선택:");

	scanf("%d", &num);

	printf("---------------------------------\n");

	switch (num)
	{
	case 1:
		printf("짜장면은 5000원 입니다.\n");
		break;
	case 2:
		printf("탕수육은 20000원 입니다.\n");
		break;
	case 3:
		printf("짬뽕은 6000원 입니다.\n");
		break;
	default:
		printf("없는 메뉴입니다.");
	  //break;
	}

	/* 자세한 조건이 붙을 경우 if조건문 사용
		if (num == 1)
		{}
		else if (num == 2)
		{}
		else if (num == 3)
		{ }
	*/

	printf("\n\n");

	return 0;
}