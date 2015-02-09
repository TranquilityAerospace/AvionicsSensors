# Avoinics Sensors, for Orientation Thruster
This repo contains the progress made by everyone in [Tranquility Aerospace](http://www.tranquilityaerospace.com/) and [Citizen Inventor](http://www.citizeninventor.com/)'s co-learning "course" on [DIY Orientation Thruster](http://www.spacetownhall.com/learn.html).

### Repo
Currently the repo contain a mix of sensor libraries and useful code, which will be updated as we learn. 

* reference lib - contains a list of sensor libraries from various source
	- NOTE! TinyGPS code will not work with uBx chipsets!!!
* folders outside of reference library contain developed code for avionics based on the reference libraries

##GPS

 * **uBx** main code folder for GPS chipsets, for now it only emulates u-Centre comms capacity. It supersedes TinyGPS-13 code, which was intended for different chip.
 * **Serial** introductory code for dual communication. Intended as starting point for GPS corrections

### Getting started
If you are programming the sensors for the first time, the best place to start is to check the sensor you have on hand and go to the reference library that is relevant to that sensor. Then [install the library](http://arduino.cc/en/Guide/Libraries) and start modifying the examples. Then save the example sketch you have in a different name and commit it! 

### Contribution
Generally very open, just don't commit directly to this repo/master ;) For example, a good way to do it is to fork this repo, make changes on your repo/branch and make a pull request (we'll merge it). 
