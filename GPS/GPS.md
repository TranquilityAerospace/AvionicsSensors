LKB 09/02/15 based on notes from 31/01/15
#How to use Arduino

1. Make sure you use a proper Arduino board
2. Make sure you are not in **Tools** menu when u plug in (it wont refresh the COMs)
3. Whenever connecting different systems (for example two PCs via board) make sure that grounds are connected

##Board details
Analogue pins are marked with Axx


##Libraray
Need to add libraries by hand. Std location for it is *C:\\Program Files (x86)\\Arduino\\arduino.exe* so copy all extra code there. Alternatively u can use SDK tools to do it.


##Ports
If you set up them as  0,1 it is talking to CPU not the board

##Connecting uBx 6 
###to Arudino Mega board

| uBx | Arduino |
| :---| -------:|
| VCC | 5V|
| RX | Tx1 18|
| Tx | Rx1 19|
|GND | GND|

There will be no light on uBx unit but it should spin out data on COM. Use my library, it wont work with TinyGPS one.

###to Arudino Nano board

| uBx | Arduino |
| :---| -------:|
| VCC | 5V|
| RX | 10|
| Tx | 11|
|GND | GND|

*I haven't testing this yet, but it should work*


