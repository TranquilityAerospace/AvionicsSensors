/* Based on SFE_BMP180 library example sketch

Before taking a pressure reading you must take a temparture reading.
This is done with startTemperature() and getTemperature().
The result is in degrees C.

Once you have a temperature reading, you can take a pressure reading.
This is done with startPressure() and getPressure().
The result is in millibar (mb) aka hectopascals (hPa).

Any Arduino pins labeled:  SDA  SCL
Uno, Redboard, Pro:        A4   A5
Mega2560, Due:             20   21
Leonardo:                   2    3

Leave the IO (VDDIO) pin unconnected. This pin is for connecting
the BMP180 to systems with lower logic levels such as 1.8V

*/


#include "temperature.h"


TempPackage package;
SFE_BMP180 pressure;


void setup()
{
    Serial.begin(9600);
    Serial.println("REBOOT");

    // Initialize the sensor (it is important to get calibration values stored on the device).

    if (pressure.begin())
        Serial.println("BMP180 init success");
    else
    {
        // Oops, something went wrong, this is usually a connection problem,
        // see the comments at the top of this sketch for the proper connections.

        Serial.println("BMP180 init fail\n\n");
        while(1); // Pause forever.
    }
}

void loop()
{
    int status = get_temperature_pressure_package(&pressure, &package);
    if (status)
    {
        Serial.println("BMP180 sensor fail\n\n");
        Serial.println(status);
        while(1); // Pause forever.
    }

    Serial.print("\r");

    // Print out the measurement:
    Serial.print("Temperature: ");
    Serial.print(package.temp,2);


    // Print out the measurement:
    Serial.print(" Abs Pressure: ");
    Serial.print(package.pressure,2);
    Serial.print(" mb, ");
    Serial.print(package.pressure*0.0295333727,2);
    Serial.print(" inHg");
    Serial.print(" ");
    
    delay(5000);  // Pause for 5 seconds.
}

