/* Editor 		: MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-26 */

#include "lib/m5shell.h"
#define KEEPRUNNING 1

int main(void){
	while(KEEPRUNNING){   
   	 	char *input = (char*)malloc(COM_MAX_LEN*sizeof(char));
    	char *args[COM_MAX_LEN];
		int background = 0;
		display_prompt();
		get_command(input);
		parse_command(input,args);
		free(input);

		// background = parse_command(args);
		// execute_command(args,background);

	}
	return 0;
}
