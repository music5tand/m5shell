/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-26 */

#include "lib/m5shell.h"

void display_prompt(void){
	char * path = getcwd();
	printf("%s", path);
}


