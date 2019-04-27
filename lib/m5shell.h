/* EDITOR 		: MUSIC5TAND
 * LATEST MODIFIED DATE : 2019-04-26 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define COM_MAX_LEN 100


// Get the current path and display the prompt.
void display_prompt(void);


// managing command
void get_command(char *input);
int parse_command(char *input, char* args[]);
void excute_command(void);
