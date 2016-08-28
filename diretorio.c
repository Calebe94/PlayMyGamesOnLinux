#include <unistd.h>
#include <stdio.h>
FILE *mafia;
char data[512];
int main() {
	char cwd[1024];
	if (getcwd(cwd, sizeof(cwd)) != NULL){
		//fprintf(stdout, "Current working dir: %s\n", cwd);
		mafia = popen("cp ~/data.txt ~/PlayMyGamesOnLinux","r");
		fgets(data,512,mafia);
	}
   else
       perror("getcwd() error");
	printf("%s\n",data);
   return 0;
}
