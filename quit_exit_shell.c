/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"

void let_me_out(void){
    exit(1);
}

void exit_shell(void){
 	char *input = (char*)malloc(COM_MAX_LEN*sizeof(char));
    int out = 1;
    int i = 1;
    while(out){
        if(i%3==0){
            printf(";p nope! Type \"Let me out\".\n");
        }else{
            printf(";p nope!\n");
        }
        fflush(stdout);
        fgets(input, COM_MAX_LEN, stdin);
        if(!(strcmp(input,"Let me out\n"))|!(strcmp(input,"let me out\n"))){
            out = 0;
            printf(";9 bye!\n");
        }
        i++;
    }
    exit(1);
}