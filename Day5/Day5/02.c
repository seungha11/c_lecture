#include <stdio.h>

int main_02(void)
{
	int num1 = 20; // 0001 0100
	int num2 = 16; // 0001 0000
	int num3 = 2147483647; // 0111 1111 1111 1111 1111 1111 1111 1111

	int r1, r2, r3, r4, r5;
	r1 = num1 << 1;
	printf("%d의 비트 왼쪽 1 시프트 연산의 결과 %d\n", num1, r1);

	r2 = num1 >> 1;
	printf("%d의 비트 오른쪽 1 시프트 연산의 결과 %d\n", num1, r2);

	r3 = num3 << 1; // 0111 1111 1111 1111 1111 1111 1111 1111 << 1
	printf("%d의 비트 왼쪽 1 시프트 연산의 결과 %d\n", num3, r3);

	/*prinf("%d\n", 10 & 17);     //0000 0101 & 0001 0001 = 0000 0001 = 1
	prinf("%d\n", 10|9);        //0000 0101 | 0000 1001 = 0000 1101 = 13
	prinf("%d\n", 4^5);         //0000 0100 ^ 0000 0101 = 0000 0001 = 1
	prinf("%d\n", ~-1);*/

	return 0;
}