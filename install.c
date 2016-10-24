#include<stdio.h>
#include<unistd.h>
#include<string.h>
/*Para Utilizar o Método via linha de comando será necessário renomear as pastas para o mesmo nome de seus respectivos arquivos e impreterívelmente sem espaços, exemplo:
Batman Arkham Origins > BatAO*/
char CURRENT_DIR[512];
int getCurrentDir(char *dir){
	char cwd[1024];
	if (getcwd(cwd, sizeof(cwd)) != NULL){
		strcpy(dir,cwd);	
		return 0;
	}else return -1;
}
int install(const char *install);
int main(int argc, char *argv[]){
	if(argc > 1){
		if(getCurrentDir(CURRENT_DIR)!=0)	printf("Não encontrei o Diretório Atual!\n");
		for(register unsigned int iCount=1;iCount<argc;iCount++){
			if(install(argv[iCount])==0)	printf("Game: %s is Now installed on your SteamOS!\n",argv[iCount]);
			else printf("There is a Problem to Install Game %s!\n",argv[iCount]);
		}
	}else{
		//Listar Matriz de Caracteres	
	}
}
int install(const char *install){
	FILE *GameDIR;
	char GAME_INSTALL[512];
	snprintf(GAME_INSTALL,512,"sudo cp %s/%s/%s /usr/bin/%s",CURRENT_DIR,install,install,install);
	GameDir=popen(GAME_INSTALL);
	if(GameDir == NULL){
		printf("Invalid Operation!\n");
		return -1;
	}
}
