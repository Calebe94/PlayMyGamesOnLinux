##########Emulators############
PSOne: epsxe
SNES: zsnes

epsxe parameters:	http://www.epsxe.com/files/ePSXe_FAQ.txt
example:
<PathToEpsxe>/epsxe.exe -loadbin <PathToROM>/whatever.iso
Obviously, replace <PathToEpsxe> with wherever ePSXe is located, and replace <PathToROM> with wherever your ISO is located.
Save this as WhateverYouWant.bat and run it whenever you want to play that game.
Some other things that you can add onto the end of the batch file:
-bios <file> loads the specified BIOS file
-f fast boot
-loadcheat <file> loads the specified cheat file
-nogui runs ePSXe without the GUI

 epsxe -nogui -slowboot -analog -loadbin ~/Downloads/PSX/CTR\ -\ Crash\ Team\ Racing/CTR\ -\ Crash\ Team\ Racing.cue
