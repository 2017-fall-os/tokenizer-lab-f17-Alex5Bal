/*
 * Author: Alejandro Balderrama
 * Class: Theory of Operating Systems
 * Professor: Dr. Freudenthal
 * Project: Tokenizer
*/
#include <stdio.h>
#include <stdlib.h>
#include "mytoc.h"

int main()
{
	const int size = 1000; /****Defines the max size of input.****/
	char string[size]; /****String used to hold the input.****/
	int i;

	do
	{
	        printf("$ ");
		fgets(string, size, stdin); /****Reads the input to the string variable.****/

		int tokenCount = tokenCounter(string);
		char** tokenVec = Mytoc(string, ' '); /****Call to Mytoc() function to obtain a vector of tokens.****/
		int* numCharacters = characterCounter(string, tokenCount);

		//printf("Main Token Count: %d\n", tokenCount);

		for (i = 0; i < tokenCount; i++) /****Loop to print the contents of the token vector.****/
		{
			numCharacters = characterCounter(string, tokenCount);
			//printf("Character count [%d]: %d\n", i, numCharacters[i]);
			printf("[%d] : ", i);

			printf("%s", tokenVec[i]);

			printf("\n");
			tokenCount = tokenCounter(string);
		}

		for (i = 0; i < tokenCount; i++)
		{
		  printf("free");
		  free(tokenVec[i]);
		}
		free(tokenVec); /****Frees the memory allocated to the token vector before moving on the the next input.****/
	} while(string[0] != 'X'); /****Program runs input prompt until X is typed in.****/

	return 0;
}
