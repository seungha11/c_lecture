#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main_03()
{
    int input1;
    input1 = 30;

    printf("���ڸ��� ���ڸ� �Է��ϼ��� : ");

    scanf("%d", &input1);

    int result1 = input1 % 10;
    int result2 = input1 / 10;
    //int result3 = result1*10+result2;

    printf("%d�� �������� %d%d�Դϴ�\n", input1, result1, result2 );

    return 0;
}
