#include <stdio.h>

int main(void)
{
	char num1 = 2, num2 = 3, num3 = 5;
	char r1, r2, r3, r4, r5;

	r1 = (++num1 > num1) & (num2 < 10);
	//++num1 -> num1 = num1+1

	r2 = (num1 == num2) | (num2 < 1);

	//num3 =5
	r3 = (num3 < 1) && (++num3 == num1);
	// 5<1=0 &&연산은 뒤에 항을 볼 필요없을때 (1항이 0일때) 뒤의 항을 실행시키지 않는다.
	r3 = (num3 > 1) || (++num3 == num1);
	
	printf("\n결과값 %d\n", r3);
	printf("num3의 값은 %d\n", num3);

	return 0;
}