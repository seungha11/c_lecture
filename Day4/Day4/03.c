#include <stdio.h>

// 복합산술연산 +=, -=, *=, /=, %=
// 일항연산자

int main_03(void)
{
	int a = 10;
	a += 1;  //a = a+1;
	a -= 1;  //a = a-1;
	a *= 2;  //a = a*2;
	a /= 2;  //a = a/2;
	a %= 3;  //a = a%3;

	printf("%d\n",a);


	return 0;
}