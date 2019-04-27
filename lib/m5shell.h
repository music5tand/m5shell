/* EDITOR 		        : MUSIC5TAND
 * LATEST MODIFIED DATE : 2019-04-26 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define COM_MAX_LEN 100


// Get the current path and display the prompt.
void display_prompt(void);


// managing command.c
void get_command(char *input);
int parse_command(char *input, char* args[]);
int excute_command(char *args[], int background);

// my_cd.c
int run_cd(char *path);

// my_ls.c
void run_ls(char *path);

// quit_exit_shell.c
void let_me_out(void);
void exit_shell(void);
