Avoinics Sensors, for Orientation Thruster
------------------------------------------
This repo contains the progress made by everyone in [Tranquility Aerospace](http://www.tranquilityaerospace.com/) and [Citizen Inventor](http://www.citizeninventor.com/)'s co-learning "course" on [DIY Orientation Thruster](http://www.spacetownhall.com/learn.html).

### Repo
Currently the repo contain a mix of sensor libraries and useful code, which will be updated as we learn. 

* reference lib - contains a list of sensor libraries from various source
	- NOTE! TinyGPS code will not work with uBx chipsets!!! Its noly here for historical reasons.
* folders outside of reference library contain developed code for avionics based on the reference libraries

##GPS
This is development code for GPS chipset. Check GPS.md for more details.

* **uBx** main code folder for GPS chipsets, for now it only emulates u-Centre comms capacity. It supersedes TinyGPS-13 code, which was intended for different chip.
* **uBx_2receivers** not working yet. Connect two GPS receivers to single Arduino Uno. Probably messed stg up with SoftwareSerial pointer.
* **Serial** us a simple code for dual communication. Intended as starting point for GPS corrections support or nav payload relay. I added some photos for the reference as well.
* **SD** is basic code for writing/reading from SD card via attached adapter. Code ammended by Pekka.

##IMU
This is development code for GPS chipset. Faraz did most work on last meeting. I just put it all together. To run this code **I2Cdev** and **MPU6050** must be installed as libraries. Take it from <http://www.i2cdevlib.com/usage> or even better from [github](https://github.com/jrowberg/i2cdevlib/). Last used version is at **/IMU/lib/**. I removed superseded code from */reference lib*. Check IMU.md for more details.

* **MPU6050_DMP6** is a basic code that outputs sensor output

##temp_pressure
?

### Getting started
If you are programming the sensors for the first time, the best place to start is to check the sensor you have on hand and go to the reference library that is relevant to that sensor. Then [install the library](http://arduino.cc/en/Guide/Libraries) and start modifying the examples. Then save the example sketch you have in a different name and commit it! 

### Contribution
Generally very open, just don't commit directly to this repo/master ;) For example, a good way to do it is to fork this repo, make changes on your repo/branch and make a pull request (we'll merge it). 
