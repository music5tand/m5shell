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
int check_builtin(char *args[]){
    int built_in = 0;
    if(strcmp(args[0], "ls")==0){
        built_in = 1;
    }else{
        built_in = 0;
    }
    return built_in;
}

int execute_command(char *args[], int background){
    if(check_builtin(&args[0])){
        printf("built in!\n");
    }else{
        printf("hello! this will be implemented\n");
    }
    return 0;
}