#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* initial size of buffer for user input */
#define READ_BUF 1000

#define DELIM "\a\t\n"

/* shell utility function */
void ctrl_C(int);
char *_getline(void)
char **tokenize(char *, const char *);

/* shell helper function */
int print(char *, int);


/* shell string functions */
int _strlen(char);


/* shell memory management */
void *_realloc(void *, int, int);


#endif /* SHELL_H */