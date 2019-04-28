/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
#define NUM_OF_BUILT_IN_FUNCTION 2
int check_exec(char *command){
    /*  TO DO :
        - check whether it is a valid system command
     */
    // char *path = getenv("PATH");
    // printf(" PATH : %s\n", path);
    // char *valid[128];
    // int i = 0;
    int is_valid = 1;
    // valid[i] = strtok(path,":");
    // while(path != NULL){	
    //     if (!(strcmp(valid[i],command))){
    //         is_valid = 1;
    //     }
    //     valid[++i] = strtok(NULL, ":");
	// }
    return is_valid;
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

int execute_exec_command(char *args[], int background){
    pid_t pid;
    pid = fork();                       /* Fork for running command on a child process. */
    if(pid<0){
        printf("fork() error.");
        return -1;
    }else if(pid == 0){
        execvp(args[0],args);
    }else{
        if(!background){				/* Foreground process. */
            waitpid(pid,NULL,0);
        }else{
            background = 0;				/* Turn off the background mode.  */
            return 0;
        }
    }
    return 0;
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
    /* Check if it is a built in command or system command. */
    if(check_builtin(args[0])){
        execute_built_in_command(args,background);
        return 0;
    }else{
        if(check_exec(args[0])){
            execute_exec_command(args,background);
            return 0;
        }else{
            printf("m5sh : Command not found. ");
            return -1;
        }
    }
    return 0;
}
