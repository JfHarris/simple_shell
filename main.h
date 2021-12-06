#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define TK_DELM " \t\r\n\a"

void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
void new_printenv(char **environ);
void new_input(void);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
void _puts(char *str);
char *_strdup(char *str);
char *_itoa(long int num, int base);
char **check_path(char **newpath, char *comm, int fail, int *follow);
void emer_stop(int signal);
int exec_comm(char **args, char **av, char **env, int status, int total);
char **find_path(void);
void free_args(char ***args);
char **parse_inp(char *line, char **env);
char *read_comm(void);
int *_error(char *argv, int total, char *args);
int new_status(char **comm, char **site);

#endif
