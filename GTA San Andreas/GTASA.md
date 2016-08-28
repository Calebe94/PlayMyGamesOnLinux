Tutorial:https://github.com/ProfessorKaos64/SteamOS-Tools/wiki/Playing-Steam-(Windows)-Games-Using-PlayOnLinux

First we need to copy "GTASA" to /usr/bin/
and them give the permission to execute: +x
	sudo cp PlayMyGamesOnLinux/GTA\ San\ Andreas/
/GTASA /usr/bin/GTASA
	sudo chmod +x /usr/bin/GTASA

After that, we need to copy "GTASA.desktop" to /usr/shar/applications
	sudo cp PlayMyGamesOnLinux/GTA\ San\ Andreas/GTASA.desktop /usr/share/applications/GTASA.desktop
