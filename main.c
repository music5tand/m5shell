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
		if(!strcmp(input,"\n")){
			goto NO_INPUT;
		}
		background = parse_command(input,args);
		execute_command(args,background);
		free(input);
		NO_INPUT:;
	}
	return 0;
}
