/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"


void get_command(char *input){
    fflush(stdout);										/* empty the buffer. */
    fgets(input, COM_MAX_LEN, stdin);					/* get commands from user. */
	
	/* check exit command */
    if(!strcmp(input,"Let me out\n")|!strcmp(input,"let me out\n")){  	/* exit command */
		let_me_out();
	}else if(!strcmp(input,"exit\n")|!strcmp(input,"quit\n")){			/* for a joke :<  */
        exit_shell();
    }
}

int parse_command(char *input, char *args[]){
    int background = 0;
    int i = 0;
	args[i] = strtok(input," \n");
	while(args[i] != NULL){	
 		if(strcmp(args[i],"&")==0){		/* Check if it is a background command.  */
			args[i] = NULL;				/* Delete an ampersand character. */
			background = 1;				/* Toggle a backgorund */
		}
		args[++i] = strtok(NULL, " \n");/* Delete a enter character. */
	}
    return background;
}