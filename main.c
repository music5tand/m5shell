/* Editor 				: MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-27 */

#include "lib/m5shell.h"
#define KEEPRUNNING 1

int main(void){
	while(KEEPRUNNING){
		int pid;
   	 	char *input = (char*)malloc(COM_MAX_LEN*sizeof(char));
    	char *args[COM_MAX_LEN];
		int background = 0;
		display_prompt();
		get_command(input);
		background = parse_command(input,args);
		free(input);

		if(!strcmp(args[0],"exit")|!strcmp(args[0],"quit")|!strcmp(args[0],"letmeout")){
			exit_shell();
		}
		execute_command(args,background);
	}
	return 0;
}
