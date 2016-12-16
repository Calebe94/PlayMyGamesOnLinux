Tutorial:https://github.com/ProfessorKaos64/SteamOS-Tools/wiki/Playing-Steam-(Windows)-Games-Using-PlayOnLinux

First we need to copy "SEGAClassics" to /usr/bin/
and them give the permission to execute: +x
	sudo cp PlayMyGamesOnLinux/SEGA/SEGAClassics /usr/bin/SEGAClassics
	sudo chmod +x /usr/bin/SEGAClassics

After that, we need to copy "SEGAClassics.desktop" to /usr/shar/applications
	sudo cp PlayMyGamesOnLinux/SEGA\SEGAClassics.destop /usr/share/applications/SEGAClassics.desktop
