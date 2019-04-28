/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-28 
   I want some macarons. */

#include "lib/m5shell.h"

int run_cd(char *args[]){
    if(args[1] != NULL){
        if(!strcmp(args[1],"..")){                          /* command line : cd .. */
            chdir("..");
            return 0;
        }else if(!strcmp(args[1],"/")){                     /* command line : cd / */
            chdir(getenv("HOME"));
            return 0;
        }else{                                              /* command line : cd (directory dose not exist.) */
            if(chdir(args[1]) == -1){
                perror("m5sh ");
                return 0;
            }
        }
    }else{                                                   /* command line : cd */
        chdir(getenv("HOME"));
        return 0;
    }
    return 0;
}