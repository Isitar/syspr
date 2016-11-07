#include "U3.h"

int sumOfArray(int arrLength, int arr[])
{
	int sum = 0;
	int* pArr = &arr;
	int* pEnd = &arr[arrLength - 1];

}

void easy()
{
	int i = 1000;
	printf("%d\n\r", i);
	int* pi;
	pi = &i;
	*pi = 1001;
	printf("%d \n\r", i);

	int arr[] = { 10,20,30 };
	int* pArr;

	pArr = &arr;
	printf("%d\r\n", *pArr);
	pArr++;
	printf("%d\r\n", *pArr);
	pArr++;
	*pArr = *(pArr - 1);
	printf("%d\r\n", *pArr);

	for (int i = 0; i < 3; i++)
		printf("%d %d\r\n", i, arr[i]);

	int a[100];
	a[0] = 100;
	a[1] = 200;

	int* pa;
	pa = &a[0];
	pa++;

	int* pa2;
	pa2 = &a;
}