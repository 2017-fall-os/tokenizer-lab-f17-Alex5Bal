# Tokenizer

## Introduction
  - This project implements a string tokenizer. In this particular implementation, a user-entered string is delimited by the 
    space(' ') character, each resulting token is then inserted into a vector, which is then printed.
   
## Functionality
  ### Creating Executable
    - Make: $ make
    - Run: $ ./test
  ### Program Interaction
    - '$' signifies the program is ready to receive user input.
    - Program will keep prompting the user for input until 'X' is typed.
## Code Directory
  ### mytoc.h: 
  - header file containing the signatures of each function defined in mytoc.c.
             - char** Mytoc(char* stringIn, char delim);
             - int tokenCounter(char* stringIn);
             - int* characterCounter(char* stringIn, int numTokens);
  - mytoc.c: 
  - test.c:

