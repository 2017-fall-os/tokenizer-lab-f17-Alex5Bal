#include <stdio.h>
#include <stdlib.h>
#include "mytoc.h"

int tokenCounter(char* stringIn)
{
	int i = 0, numTokens = 1;

	while (stringIn[i] != '\0')
	{
		if (stringIn[i] == ' ')
		{
			numTokens++;
		}
		i++;
	}
	return numTokens;
}

int* characterCounter(char* stringIn, int numTokens)
{
	int i, j, k = 0, x = 0, numChars = 0;
	int numCharacters[numTokens];
	int* ptrNumChars;

	for (i = 0; stringIn[i] != '\0'; i++)
	{
		if (stringIn[i] == ' ')
		{
			for (j = x; stringIn[j] != ' '; j++)
			{
				numChars++;
			}
			numCharacters[k] = numChars;
			numChars = 0;
			x = i + 1;
			k++;
		}
	}

	for (j = x + 1; stringIn[j] != '\0'; j++)
	{
		numChars++;
	}
	numCharacters[k] = numChars;

	ptrNumChars = numCharacters;

	return ptrNumChars;
}

char** Mytoc(char* stringIn, char delim)
{
	int i, j = 0, x = 0, tokenCount = tokenCounter(stringIn);
	char** tokenVecOut = (char**)calloc(tokenCount + 1, sizeof(char*));
	int* numCharacters = characterCounter(stringIn, tokenCount);

	for (i = 0; i < tokenCount; i++)
	{
		tokenVecOut[i] = (char*)malloc(numCharacters[i] * sizeof(char));
	}

	i = 0;

	while (stringIn[x] != '\0')
	{
		if (stringIn[x] != delim)
		{
			tokenVecOut[i][j] = stringIn[x];
			j++;
		}
		if (stringIn[x] == delim)
		{
			tokenVecOut[i][j] = '\0';
			i++;
			j = 0;
		}
		x++;
	}

	return tokenVecOut;

}
