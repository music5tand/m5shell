/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
#define MAX_LEN 100

char *get_command(void){
    char *args[MAX_LEN];
    char *input = (char*)malloc(MAX_LEN*sizeof(char));	// allocate memory for input.
    fflush(stdout);
    fgets(input, MAX_LEN, stdin);	
    return input;
}