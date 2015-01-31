#ifndef TEMP
#define TEMP

#include <SFE_BMP180.h>
#include <Wire.h>


typedef struct 
{
    double temp;
    double pressure;
} TempPackage;


int get_tempurature(SFE_BMP180* pressure, TempPackage* package);

int get_pressure(SFE_BMP180* pressure, TempPackage* package);

int get_temperature_pressure_package(SFE_BMP180* pressure, TempPackage* package);

#endif
