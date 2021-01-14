
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main(void)
{

	/*printf("\a");
	printf("Hello World!\tHello World!!\n");
	printf("Hello World!\\Hello World!!\n");*/

	/*printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****");

	printf("\n");
	printf("%+5s\n", "*");
	printf("%+5s\n", "**");
	printf("%+5s\n", "***");
	printf("%+5s\n", "****");
	printf("%+5s\n", "*****");

	printf("\n");
	printf("%5s\n", "*");
	printf("%6s\n", "***");
	printf("%7s\n", "*****");
	printf("%8s\n", "*******");
	printf("%9s\n", "*********");

	printf("\n\n\n");*/

	/*putchar('a');
	puts("Hello world\n");
	printf("우리나라 경제 성장률은 %.1f %%입니다.", 2.5);

	char ch = 0;
	printf("문자를 입력하세요");
	ch = getchar();
	printf("문자 : %c, ASCII : %d \n", ch, ch);*/

	/*char input[50];
	printf("문자열을 입력하세요");
	gets(input);
	printf("문자열 %s \n", input);*/

	char input2[50];
	printf("문자열을 입력하세요 :");
	scanf("%s", input2);
	printf("문자열 %s \n", input2);
	
	return 0;
}