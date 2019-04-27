/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
#define NUM_OF_BUILT_IN_FUNCTION 7

int check_builtin(char *command){
    char *built_in_list[NUM_OF_BUILT_IN_FUNCTION+1] = {"cd", "ls", "mkdir", "cat", "rm", "rmdir", "grep", NULL};
    int built_in = 0;
    int i = 0;
    while(built_in_list[i]!=NULL){
        if(!(strcmp(command, built_in_list[i++]))){
            built_in = 1;
            return built_in;
        }
    }
    return built_in;
}

int execute_command(char *args[], int background){
    if(check_builtin(args[0])){

    }else{

    }
    return 0;
}