Tutorial:https://github.com/ProfessorKaos64/SteamOS-Tools/wiki/Playing-Steam-(Windows)-Games-Using-PlayOnLinux

First we need to copy "MafiaII" to /usr/bin/
and them give the permission to execute: +x
	sudo cp PlayMyGamesOnLinux/MafiaII/MafiaII /usr/bin/MafiaII
	sudo chmod +x /usr/bin/MafiaII

After that, we need to copy "MafiaII.desktop" to /usr/shar/applications
	sudo cp PlayMyGamesOnLinux/MafiaII/MafiaII.destop /usr/share/applications/MafiaII.desktop
