#include <stdio.h>

int main_01(void)
{
	//비트연산자 &,|,^,~
	int a = 20, b = 16;  //0001 0100  0001 0000
	int result1, result2, result3, result4;

	result1 = a & b; //논리곱(AND)
	printf("비트단위 And(논리곱) 연산의 결과 %d\n", result1);

	result2 = a | b; //논리합(OR)
	printf("비트단위 OR(논리합) 연산의 결과 %d\n", result2);

	result3 = a ^ b; //배타적 논리합(XOR)
	printf("비트단위 XOR(배타적 논리합) 연산의 결과 %d\n", result3);

	result4 = ~ b; //부정 NOT 연산
	printf("비트단위 NOT(부정) 연산의 결과 %d\n", result4);

	return 0;
}