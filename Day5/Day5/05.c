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
	// 5<1=0 &&������ �ڿ� ���� �� �ʿ������ (1���� 0�϶�) ���� ���� �����Ű�� �ʴ´�.
	r3 = (num3 > 1) || (++num3 == num1);
	
	printf("\n����� %d\n", r3);
	printf("num3�� ���� %d\n", num3);

	return 0;
}