#include <stdio.h>

int main_01(void)
{
	//��Ʈ������ &,|,^,~
	int a = 20, b = 16;  //0001 0100  0001 0000
	int result1, result2, result3, result4;

	result1 = a & b; //����(AND)
	printf("��Ʈ���� And(����) ������ ��� %d\n", result1);

	result2 = a | b; //����(OR)
	printf("��Ʈ���� OR(����) ������ ��� %d\n", result2);

	result3 = a ^ b; //��Ÿ�� ����(XOR)
	printf("��Ʈ���� XOR(��Ÿ�� ����) ������ ��� %d\n", result3);

	result4 = ~ b; //���� NOT ����
	printf("��Ʈ���� NOT(����) ������ ��� %d\n", result4);

	return 0;
}