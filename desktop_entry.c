#include<stdio.h>
#include<string.h>
/*
[Desktop Entry]
Version=1.0
Name=Mega Man 8
Comment=Mega Man
#Lembrar de Alterar o Diretório
Exec=bash -c 'retroarch -L ~/.config/retroarch/cores/pcsx_rearmed_libretro.so /home/calebe94/JOGOS/PSX/"Mega Man 8"/"Mega Man 8.cue" $SHELL'
Terminal=false
Type=Application
Categories=Application;
#Lembrar de dar permissão "sudo chmod +x MIDI.desktop"
Icon=/home/calebe94/Imagens/mega-man8.jpg
*/

char Desktop_Entry[10][30] = {"[Desktop Entry]","Type=Application","Version=1.0","Name=","Comment=","Exec=","Terminal=","Type=","Categories=","Icon="};

int main(int argc,char *argv[]){
	FILE *arquivo = fopen("Files/psx.bin","r");
	if(arquivo == NULL) printf("Sem Arquivo!\n");
	char *line;
	size_t len = 0;
	int read;
	while ((read = getline(&line, &len, arquivo)) != -1) {
		printf("%s",line);
	}
	
	fclose(arquivo);
}
