/* EDITOR 		        : MUSIC5TAND
 * LATEST MODIFIED DATE : 2019-04-28 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h> /* for displaying path and change working directory */
#include <signal.h> /* for hadling and blocking signal */
#include <sys/types.h>
#include <sys/stat.h>

#define COM_MAX_LEN 100 /* this shell is capable of proessing up to 100 characters. */ 

/*  display_prompt
    Get the current path and display the prompt. */
void display_prompt(void);

// get_command.c
void get_command(char *input);
int parse_command(char *input, char* args[]);

// exec_commad.c
int check_builtin(char *command);
int execute_exec_command(char *args[], int background);
int execute_built_in_command(char *args[], int background);
int excute_command(char *args[], int background);

// my_cd.c
int run_cd(char *args[]);

// my_ls.c
void run_ls(char *args[]);

// quit_exit_shell.c
void let_me_out(void);
void exit_shell(void);

