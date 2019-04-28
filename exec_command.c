/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
#define NUM_OF_BUILT_IN_FUNCTION 2

int execute_exec_command(char *args[], int background){

    return 0;
}

int check_builtin(char *command){
    char *built_in_list[NUM_OF_BUILT_IN_FUNCTION+1] = {"cd", "ls", NULL};
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

int execute_built_in_command(char *args[], int background){
    if(!strcmp(args[0],"cd")){
        run_cd(args);
    }else if(!strcmp(args[0],"ls")){
        run_ls(args);
    }
    return 0;
}

int execute_command(char *args[], int background){
    if(check_builtin(args[0])){
        execute_built_in_command(args,background);
    }else{
        execute_exec_command(args,background);
    }
    return 0;
}