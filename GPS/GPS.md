LKB 25/04/15

This is short introduction to how use uBx chipset with Arduino

#Short intro -- How to use Arduino

1. Make sure you use a proper Arduino board. Select in **Tools**
2. Make sure you are not in **Tools** menu when u plug in (it wont refresh the COMs)
2. Connect to correct port
3. Whenever connecting different systems (for example two PCs via board) make sure that grounds are connected
4. Verify your code first
4. If all goes well upload a code
5. It should work
5. ctr+shift+m for Serial Monitor
5. make sure that 115200 band speed is selected

##Board details
Analogue pins are marked with Axx


##Libraray
Need to add libraries by hand. Std location for it is *C:\\Program Files (x86)\\Arduino\\arduino.exe* so copy all extra code there. Alternatively u can use SDK tools to do it.


##Ports
If you set up them as  0,1 it is talking to CPU not the board

#How to use GPS chipset

##Connecting uBx 6
###to Arudino Mega board

| uBx | Arduino Mega |
| :---| -------:|
| VCC | 5V|
| RX | Tx1 18|
| Tx | Rx1 19|
|GND | GND|

:GY-GPS6MV2

There will be no light on uBx unit but it should spin out data on COM. Use my library, it wont work with TinyGPS one.

###to Arudino Nano board

* Tools->Board->Arudino Nano w/o ATmego328 for Arudino 1.6
* Tools->Board->Arudino Nano for Arudino 1.6.3

| uBx | Arduino Nano |
| :---| -------:|
| - | GND|
| 5V | 5V|
| RX | 11|
| Tx | 10|

:Droteq NEO-M8N-0-01

Below are settings for additional GPS unit. Note that relevant code **uBx_2receivers** is not fully working yet.

| uBx | Arduino Nano |
| :---| -------:|
| VCC | 5V|
| RX | 9|
| Tx | 8|
|GND | GND|

:to GY-GPS6MV2

###How do I know it works

On serial monitor you should look response similar to this one (takes 10s?) :

```batch
Configuring u-Blox GPS initial state...
Setting Navigation Mode... ACK Timeout
Setting Navigation Mode... Success!
ACK Received! B5 62 05 01 02 00 06 24 32 5B
```
###WIP

* Develop sequential reading from two GPS units
* Allow recording to SD card
* combine with IMU
