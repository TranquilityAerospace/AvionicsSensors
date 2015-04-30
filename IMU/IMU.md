
Manual is at <http://playground.arduino.cc/Main/MPU-6050>

##Connecting InvenSense MPU-6050 sensor to Arudino Nano board

* I2Cdev and MPU6050 must be installed as libraries. Take it from <http://www.i2cdevlib.com/usage>.
* Select proper board
	* Tools->Board->Arudino Nano w/o ATmego328 for Arudino 1.6
	*	Tools->Board->Arudino Nano for Arudino 1.6.3
* connect wires properly

| uBx | Arduino Nano | breadboard |
| :---| -------:| -------:|
| VCC_IN | x| |
| 3.3V | 3v3| 2b |
| GND | GND| 12i |
| SCL| A4 | 9c |
| SDA | A5| 8C |
| FSYNC | x| |
| INTA | D2| 11j |

: x means not connected

###How do I know it works

On serial monitor you should see following:

```batch
Initializing I2C devices...
Testing device connections...
MPU6050 connection successful

Send any character to begin DMP programming and demo:
````
send stg

###WIP

* Sort out calibration
* Sort out gimbal lock
* Allow recording to SD card
* combine with GPS