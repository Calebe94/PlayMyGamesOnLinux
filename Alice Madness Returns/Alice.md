Tutorial:https://github.com/ProfessorKaos64/SteamOS-Tools/wiki/Playing-Steam-(Windows)-Games-Using-PlayOnLinux

First we need to copy "Alice" to /usr/bin/
and them give the permission to execute: +x
	sudo cp PlayMyGamesOnLinux/Alice\ Madness\ Returns/Alice /usr/bin/Alice
	sudo chmod +x /usr/bin/Alice

After that, we need to copy "Alice.desktop" to /usr/shar/applications
	sudo cp PlayMyGamesOnLinux/Alice\ Madness\ Returns/Alice.destop /usr/share/applications/Alice.desktop
