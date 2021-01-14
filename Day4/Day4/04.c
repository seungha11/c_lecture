#include <stdio.h>

int main(void)
{
	int a = 10;

	printf("%d\n", ++a); // 11
	printf("%d\n", a++); // 11
	printf("%d\n", a); // 12

	/* a++;  //a=a+1 (11) +=
	++a;  //a=a+1 (12) +=
	--a;  //a=a-1
	a--;  //a=a-1 */


	return 0;
}