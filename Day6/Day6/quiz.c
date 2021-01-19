#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>
#include <stdlib.h>  //srand
#include <time.h>    //time

int main_quiz(void)
{
	srand(time(NULL));  //--랜덤값 초기화
	int result = rand() % 100 + 1;  //랜덤값 생성하기(1~100)
	int chance = 10;  //10번 내에 맞춰라
	int answer = 0;  //사용자가 입력하는 값

	while (1)
	{
		chance--;
		
		printf("숫자를 맞춰라 : ");
		scanf("%d", &answer);


		if (result > answer)
		{
			printf("UP!!!\n");
			printf("%d번의 기회가 남았습니다 \n", chance);
		}
		else if (result < answer)
		{
			printf("DOWN!!!\n");
			printf("%d번의 기회가 남았습니다 \n", chance);
		}
		else if (result = answer)  //정답을 맞춘 경우
		{
			printf("정답입니다!\n");
			break;
		}

		//change(기회)를 다 쓴 경우 break;
		if (chance == 0)
		{
			printf("답은 %d입니다! 아쉽게 실패하셨네요~\n", result);
			break;
		}
	}

	return 0;
}