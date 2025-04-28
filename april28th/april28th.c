#include <stdio.h>

int swap3(int *n1, int *n2, int *n3) {

	int tmp = *n2;
	*n2 = *n1;
	*n1 = *n3;
	*n3 = tmp;
	return 0;
}

int main(void)
{
	int num1 = 11, num2 = 22, num3 = 33;
	swap3(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}
