#include <unistd.h>
#include <stdio.h>
#include<string.h>
#define GENERIC_DIR "/home/steam/.PlayOnLinux/wineprefix/Steam/drive_c/Program\
 Files/Steam/steamapps/common/Mafia\ II/pc"
FILE *mafia;
char data[512],cwd[1024];
int main() {
	int selec=0;
	do{
		printf("Select an Option:\n");
		printf("[1]- To Install \n");
		scanf("%d",&selec);
		if(selec ==1){
			if (getcwd(cwd, sizeof(cwd)) != NULL){
				//fprintf(stdout, "Current working dir: %s\n", cwd);
				mafia = popen("sudo cp ~/data.txt ~/PlayMyGamesOnLinux","r");
				fgets(data,512,mafia);
			}   
			else       perror("getcwd() error");
		}
	}while(selec<1||selec>3);
	printf("%s\n",data);
   return 0;
}
