Tutorial:https://github.com/ProfessorKaos64/SteamOS-Tools/wiki/Playing-Steam-(Windows)-Games-Using-PlayOnLinux

First we need to copy "GTAVC" to /usr/bin/
and them give the permission to execute: +x
	sudo cp PlayMyGamesOnLinux/GTA\ Vice\ City/
/GTAVC /usr/bin/GTAVC
	sudo chmod +x /usr/bin/GTAVC

After that, we need to copy "GTAVC.desktop" to /usr/shar/applications
	sudo cp PlayMyGamesOnLinux/GTA\ Vice\ City/GTAVC.desktop /usr/share/applications/GTAVC.desktop
