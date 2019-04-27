/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"


void get_command(char *input){
    fflush(stdout);
    fgets(input, COM_MAX_LEN, stdin);
    if(!strcmp(input,"Let me out\n")|!strcmp(input,"let me out\n")){
		let_me_out();
	}else if(!strcmp(input,"exit\n")|!strcmp(input,"quit\n")){
        exit_shell();
    }
}

int parse_command(char *input, char *args[]){
    int background = 0;
    int i = 0;
	args[i] = strtok(input," \n");
	while(args[i] != NULL){	
 		if(strcmp(args[i],"&")==0){
			args[i] = NULL;			// !!! delete the ampersand.
			background = 1;
		}
		args[++i] = strtok(NULL, " \n");
	}
    return background;
}