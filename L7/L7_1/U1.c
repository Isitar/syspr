
typedef int bool;

#include <math.h>

#include "U1.h"
#define DEBUG true

/// <summary>
/// Determines whether the specified number is prime.
/// </summary>
/// <param name="number">The number.</param>
/// <returns>
///   <c>true</c> if the specified number is prime; otherwise, <c>false</c>.
/// </returns>
bool isPrime(int number)
{
	if (DEBUG)
		printf("checking %d\r\n", number);
	for (int i = 2; i <= sqrt(number); i++)
	{
		if ((number % i) == 0)
			return false;
	}
	return true;
}