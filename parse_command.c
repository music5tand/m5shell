/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
#define MAX_LEN 100



char *parse_command(void){
    char *args[MAX_LEN];
    char *input = (char*)malloc(MAX_LEN*sizeof(char));	// allocate memory for input.
    fflush(stdout);
    fgets(input, MAX_LEN, stdin);

    int i = 0;
	args[i] = strtok(input," \n");
	while(args[i] != NULL){	
        printf("%s",args[i]);
		if(strcmp(args[i],"&")==0){
			args[i-1] = NULL;			// !!! delete the ampersand.
			//background = 1;
			}
		args[++i] = strtok(NULL, " \n");
	}
    return args;
}