#include <stdio.h>
#include <stdlib.h>
#include "mytoc.h"

int main()
{
	char string[500];
	int i, j;

	do
	{
		printf("$ ");
		//write(0, '$', 1);
		fgets(string, 500, stdin);

		int tokenCount = tokenCounter(string);
		char** tokenVec = Mytoc(string, ' ');
		int* numCharacters = characterCounter(string, tokenCount);

		printf("Main Token Count: %d\n", tokenCount);

		for (i = 0; i < tokenCount; i++)
		{
			numCharacters = characterCounter(string, tokenCount);
			printf("Character count [%d]: %d\n", i, numCharacters[i]);
			printf("[%d] : ", i);

			for (j = 0; j < numCharacters[i]; j++)
			{
				printf("%c", tokenVec[i][j]);
			}
			printf("\n");
			tokenCount = tokenCounter(string);
		}

		free(tokenVec);
		fflush(stdin);
	} while(string[0] != 'X');

	return 0;
}
