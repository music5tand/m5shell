/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 
   I want some macarons. */

#include "lib/m5shell.h"

int run_cd(char *args[]){
    if(args[1] != NULL){
        if(!strcmp(args[1],"..")){                          /* command line : cd .. */
            chdir("..");
        }else if(!strcmp(args[1],"/")){                     /* command line : cd / */
            chdir(getenv("HOME"));
        }else{                                              /* command line : cd (directory dose not exist.) */
            if(chdir(args[1]) == -1){
                perror("m5sh ");
            }
        }
    }else{
        /* command line : cd */
        chdir(getenv("HOME"));
    }
   return 0;
}