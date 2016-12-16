#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>

#define STEAM Steam.exe
/*Oque é Necessário para lançar um Jogo WINE???
	>GAME ID
	>Pasta da Steam
	>Pasta do Jogo
	>Nome do Executável do Jogo
	>Nome do Jogo
	>Versão do Wine
*/
// Executável do Castle of Illusion
int main(int argc, char *argv[]){
	FILE *steam,*jogo,*open_game;
	int status;
	char command[]={"wine explorer /desktop=Steam,1366x768 /home/calebe94/.PlayOnLinux/wineprefix/Steam/drive_c/Program\\ Files/Steam/Steam.exe -applaunch 50130 &"},path[1035],retorno[1035];

	system("clear");
	open_game = popen(command,"r");
	if(open_game == NULL)	return -1;
	steam = popen("/usr/bin/pgrep Steam.exe &","r");
	if(steam == NULL) printf("Não Abriu a Steam!\n");
	while(fgets(path,sizeof(path)-1,steam)==NULL){
		usleep(100*100*100);
		printf("Steam Ainda não Abriu!\n");
		steam = popen("/usr/bin/pgrep Steam.exe &","r");
	}
	
	jogo = popen("/usr/bin/pgrep mafia2.exe &","r"); // Quando o programa estiver pronto terei de concatenar as strings
	if(jogo == NULL)	printf("Não Abriu o JOGO!\n");
	do{jogo = popen("/usr/bin/pgrep mafia2.exe &","r");}while(fgets(path,sizeof(path)-1,jogo)==NULL);
	do{
		jogo = popen("/usr/bin/pgrep mafia2.exe &","r");
		usleep(1000*100);
	}while(fgets(path,sizeof(path)-1,jogo) != NULL);

	system("wine /home/calebe94/.PlayOnLinux/wineprefix/Steam/drive_c/Program\\ Files/Steam/Steam.exe -shutdown");
	system("wineserver -k");
	pclose(steam);
	pclose(jogo);
	pclose(open_game);	
	printf("Terminou!\n");
	return 0;
}
