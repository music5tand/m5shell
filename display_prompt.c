/* Editor               : MUSIC5TAND
   LATEST MODIFIED DATE : 2019-04-27 */

#include "lib/m5shell.h"

#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET_COLOR "\x1b[0m"

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
	getcwd(path,sizeof(path));
	//printf("\n%s@%s:%s$",username, hostname, path);
	printf("\n"GREEN);
	printf("%s@%s:",username,hostname);
	printf(BLUE);
	printf("%s$ ",path);
	printf(RESET_COLOR);
}



