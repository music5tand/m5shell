/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-26 */

#include "lib/m5shell.h"

void display_prompt(void){
	char *username;
	char hostname[256];
	char path[256];
		
	username = getenv("USER");
	if(username == NULL){
		perror("fail to get a username");
		return;
	}
	if(gethostname(hostname, sizeof(hostname))!=0){
		perror("fail to get a hostname");
		return;
	}
	//if(getcwd(path,sizeof(path))){
		//perror("failed to get a current path");
		//return;
	//}
	
	getcwd(path,sizeof(path));
	printf("%s@%s:%s>> \n",username, hostname, path);
}



