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
  - mytoc.h: header file containing the signatures of each function defined in mytoc.c.
  - mytoc.c: source file containing the functions used to implement a tokenizer. 
  - test.c: source file used to receive input and print out the elements of the token vector.
## Issues
  - Segmentation fault occurs when there are more than 2 tokens in the input string.
  - For debugging purposes, the same program was ran in Eclipse and it ran up to specs.
  - Used gdb() to narrow down the error to line 79 of mytoc.c.
  - Problem was not fixed, not fully functional in EMACS.

