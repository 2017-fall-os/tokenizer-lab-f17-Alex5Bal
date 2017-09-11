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

		char** tokenVec = Mytoc(string, ' ');
		int tokenCount = tokenCounter(string);
		int* numCharacters = characterCounter(string, tokenCount);

		for (i = 0; i < tokenCount; i++)
		{
			printf("[%d] : ", i);
			for (j = 0; j < numCharacters[i]; j++)
			{
				printf("%c", tokenVec[i][j]);
			}
			printf("\n");
		}
		printf("\n");

		free(tokenVec);
		fflush(stdin);
	} while(string[0] != 'X');

	return 0;
}
