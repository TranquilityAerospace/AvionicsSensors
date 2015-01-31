#include "temperature.h"

int get_tempurature(SFE_BMP180* pressure, TempPackage* package)
{
    int error = 0;
    char status;
    // Start a temperature measurement:
    // If request is successful, the number of ms to wait is returned.
    // If request is unsuccessful, 0 is returned.
    status = pressure->startTemperature();
    if (status){

        // Wait for the measurement to complete:
        delay(status);

        status = pressure->getTemperature(package->temp);
        if (!status)
            error = 1;
    } else {
        error = 1;
    }
    return error;

}

int get_pressure(SFE_BMP180* pressure, TempPackage* package)
{
    int error = 0;
    char status;

    // The parameter is the oversampling setting, from 0 to 3 (highest res, longest wait).
    status = pressure->startPressure(3);
    if (status){
        // Wait for the measurement to complete:
        delay(status);

        status = pressure->getPressure(package->pressure, package->temp);
        if (!status)
            error = 2;   
    } else {
        error = 2;
    }
    return error;

}

/** 
  * Retrieve sensor data and fill in struct
  * params package struct to store them
  * return status 1 failed T, 2 failed P, 3 all failed
  */
int get_temperature_pressure_package(SFE_BMP180* pressure, TempPackage* package)
{
    char status;
    double T,P;
    int sensor_status = 0;

    // You must first get a temperature measurement to perform a pressure reading.
    sensor_status += get_tempurature(pressure, package);

    // Start a pressure measurement:
    sensor_status += get_pressure(pressure, package);

    return sensor_status;
}
