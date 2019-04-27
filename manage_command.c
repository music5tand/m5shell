/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"


void get_command(char *input){
    fflush(stdout);
    fgets(input, COM_MAX_LEN, stdin);
}


int parse_command(char *input, char *args[]){
    int background = 0;
    int i = 0;
	args[i] = strtok(input," \n");
	while(args[i] != NULL){	
        printf("%s\n",args[i]);
		if(strcmp(args[i],"&")==0){
			args[i-1] = NULL;			// !!! delete the ampersand.
			background = 1;
			}
		args[++i] = strtok(NULL, " \n");
	}
    return background;
}


int execute_command(char *args, int background){
    
    return 0;
}