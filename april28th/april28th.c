#include <stdio.h>

int main(void)
{
	/*
	
	int arr[3] = {0, 1, 2};
	int* p = arr;
	printf("Name of Array : %p\n", arr);
	printf("1st element : %d\n", *(arr + 0));
	printf("2nd element : %d\n", *(arr + 1));
	printf("3rd element : %d\n", *(arr + 2));

	printf("1st element : %d\n", p[0]);
	printf("2nd element : %d\n", p[1]);
	printf("3rd element : %d\n", p[2]);
	return 0;

	*/

	/*
	int arr[3] = {11, 22, 33};
	int* ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");

	return 0;
	*/

	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };
	
	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

		return 0;
}
