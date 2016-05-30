#ifndef PARSE_H
#define PARSE_H
//includes
#include <stdio.h>
#include <errno.h>
#include <assert.h>
#include <stdlib.h>

//prototypes 
void Parse();
void printParse();
void prepAndExecuteCommand();
void executeCommand();
char ** prepareCommand(int cmd);

//struct for storing cmd line info
typedef struct commandStruct{

  //stores if the end-of-file has been reahced
  int eof;

  //stores the number of commands that exist  
  int commandCount;

  //flag to signal input redirection
  int inputRedirected;

  //flag to signal output redirection
  int outputRedirected;
 
  //flag to signal output redirection
  int append;

  //stores to input redirect 
  char inputSpecifier[10000];

  //stores the output redirect file
  char outputSpecifier[100000];

  //stores the number of paramets for a single command
  int paramCount[16];

  //stores the parameters of the command
  char *cmds[16][10000];

} commandStruct;

extern commandStruct myCommand;
#endif
