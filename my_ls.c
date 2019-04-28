/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 */

#include "lib/m5shell.h"
void run_ls_long_format(char *path){
    // DIR *dp;
    // struct dirent *dirEnt;
    // // struct stat *fileAttrib;
    // dp = opendir(path);
    // if (!dp){
    //     perror(path);
    // }
    // while((dirEnt = readdir(dp))!=NULL) {
    //     printf("%s\n", dirEnt->d_name); 
    // }
    // closedir(dp);
}

void run_ls(char *args[]){
    char *path;
    DIR *dp;
    struct dirent *dirEnt;
    if (args[1]==NULL){              /* if there is no additional option, set the path "." */
        path = ".";
    }else if(!(strcmp(args[1],"-l"))){
        run_ls_long_format(args[2]); /* for long format option. get the struct stat, and show the informaition about permission of file, */
        return ;                     /* file size, file owner, modified date and file name. */
    }else{
        path = args[1];              /* if a path is given, set the given path.  */
    }

    /* This is the part ls run actually. */
    /* Open the directory using opendir and read it. */
    dp = opendir(path);
    if (!dp){
        perror(path);
    }
    int i = 0;
    while((dirEnt = readdir(dp))!=NULL) {
        printf("%25s", dirEnt->d_name);
        i++;
        if(i%4 == 0){
            printf("\n");
        }
    }
    printf("\n");
    closedir(dp);
    return;
}