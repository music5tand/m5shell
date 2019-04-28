/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
void run_ls_long_format(char *path){
    DIR *dp;
    struct dirent *dirEnt;
    struct stat *fileAttrib;
    dp = opendir(path);
    if (!dp){
        perror(path);
    }
    while(dirEnt = readdir(dp)) {
        printf("%s\n", dirEnt->d_name); 
    }
    closedir(dp);
}

void run_ls(char *args[]){
    char *path;
    DIR *dp;
    struct dirent *dirEnt;
    if (args[1]==NULL){ /* if there is no additional option, just display all the files. */
        path = ".";
    }else if(!(strcmp(args[1],"-l"))){
        run_ls_long_format(args[2]);
        return ;
    }else{
        path = args[1];
    }
    dp = opendir(path);
    if (!dp){
        perror(path);
    }
    while(dirEnt = readdir(dp)) {
        printf("%s\n", dirEnt->d_name); 
    }
    closedir(dp);
}