/* Editor 		: MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-26 */

#include "lib/m5shell.h"
#define KEEPRUNNING 1

int main(int argc, const char*argv[]){
		while(KEEPRUNNING){
			display_prompt();
			parse_command();
		}
	return 0;
}
