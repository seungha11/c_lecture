#include <stdio.h>

/* �������
if~else
switch

���ǽ��� ������� true, false(1,0)
if(���ǽ�/condition)
{
	���϶� ����ȴ�
	}
	else
	{���� �ƴҶ�(����)}
	if
	{���ǽ� A�� ���϶� ����}
	else if(���ǽ� B)
	{���ǽ� B�� ��}
	else if(���ǽ� C)
	{���ǽ� C�� ���϶� ����}
	.....else
	{���ǽ� A,B,C ��� �����϶�}
*/

int main_01(void)
{
	char num1 = 10, num2 = 9;
	if (!(num1 < num2))              //!(true)=false
	{
		printf("%d�� %d���� Ů�ϴ�.",num1, num2);
	}
	else
	{
		printf("%d�� %d���� �۽��ϴ�.", num1, num2);
	}

	return 0;
}