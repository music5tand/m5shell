/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"

void let_me_out(void){
    exit(1);
}

void exit_shell(void){
 	char *input = (char*)malloc(COM_MAX_LEN*sizeof(char));
    int i = 1;
    while(i){
        printf(";p nope!\n");
        fflush(stdout);
        fgets(input, COM_MAX_LEN, stdin);
        if(strcmp(input,"Let me out\n")|strcmp(input,"let me out\n")){
            i = 0;
            printf(";p bye!\n");

        }
    }
    exit(1);
}