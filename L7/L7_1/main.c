#include <stdio.h>
#define DEBUG = true;

#define Uebung 2


int main()
{

	if (Uebung == 1)
	{
		printf("insert from number: ");
		int from;
		scanf_s("%d", &from);
		printf("insert to number: ");
		int to;
		scanf_s("%d", &to);

		for (int i = from; i <= to; i++)
		{
			if (isPrime(i))
				printf("%d\r\n", i);
		}
	}
	else if (Uebung == 2)
	{
		printf("%d\r\n", strlen("Swag Swag Swag"));
		char fromStr[] = "Hallo Welt :)";
		char toStr[14];
		printf("from String: %s \r\n", fromStr);
		copyStr(fromStr, toStr);

		printf("to String: %s \r\n", toStr);

		printf("fromStr = toStr? exp: 1 is:  %d\r\n", compareStr(fromStr, toStr));
		printf("fromStr = toStr? exp: 0 is: %d\r\n", compareStr("hazy", "blazy"));
		printf("fromStr = toStr? exp: 0 is: %d\r\n", compareStr("Hello World", "Hello from the other side"));
		printf("fromStr = toStr? exp: 1 is: %d\r\n", compareStr("Huhu", "Huhu"));
		printf("fromStr = toStr? exp: 0 is: %d\r\n", compareStr("huhu", "Huhu"));
	}
	else if (Uebung == 3)
	{
		easy();
	}

	int x;
	scanf_s("%d", &x);

}
