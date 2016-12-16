Tutorial:https://github.com/ProfessorKaos64/SteamOS-Tools/wiki/Playing-Steam-(Windows)-Games-Using-PlayOnLinux

First we need to copy "SS2" to /usr/bin/
and them give the permission to execute: +x
	sudo cp PlayMyGamesOnLinux/Serious\ Sam\ 2/SS2 /usr/bin/SS2
	sudo chmod +x /usr/bin/SS2

After that, we need to copy "SS2.desktop" to /usr/shar/applications
	sudo cp PlayMyGamesOnLinux/Serious\ Sam/SS2.desktop /usr/share/applications/SS2.desktop
