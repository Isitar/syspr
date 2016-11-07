#include "U2.h";

/// <summary>
/// Returns the length of the string
/// </summary>
/// <param name="text">The text.</param>
/// <returns></returns>
int strlen(char text[])
{
	int i = 0;
	for (i = 0; text[i] != '\0'; i++);
	return i;
}

/// <summary>
/// Copies the string.
/// </summary>
/// <param name="fromStr">From string.</param>
/// <param name="toStr">To string.</param>
void copyStr(char fromStr[], char toStr[])
{
	int i;
	int fromStrLength = strlen(fromStr);
	for (i = 0; i <= fromStrLength; i++)
	{
		toStr[i] = fromStr[i];
	}
}

/// <summary>
/// Compares the string.
/// </summary>
/// <param name="text1">The text1.</param>
/// <param name="text2">The text2.</param>
/// <returns>0 if equal, 1 if greater, -1 if smaller</returns>
int compareStr(char text1[], char text2[])
{
	//if (strlen(text1) != strlen(text2))
	//	return 0;


	for (int i = 0; i <= strlen(text1); i++)
	{
		if (text1[i] != text2[i])
			return text1[i] - text2[i];
	}
	return 0;
}
