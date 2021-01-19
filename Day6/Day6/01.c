#include <stdio.h>

/* 조건제어문
if~else
switch

조건식은 결과값이 true, false(1,0)
if(조건식/condition)
{
	참일때 실행된다
	}
	else
	{참이 아닐때(거짓)}
	if
	{조건식 A가 참일때 실행}
	else if(조건식 B)
	{조건식 B가 참}
	else if(조건식 C)
	{조건식 C가 참일때 실행}
	.....else
	{조건식 A,B,C 모두 거짓일때}
*/

int main_01(void)
{
	char num1 = 10, num2 = 9;
	if (!(num1 < num2))              //!(true)=false
	{
		printf("%d는 %d보다 큽니다.",num1, num2);
	}
	else
	{
		printf("%d는 %d보다 작습니다.", num1, num2);
	}

	return 0;
}