#include <stdio.h>

#define TotalNoOfReadings 50

bool readDataFromFile(float *Temperature, int *SOC, char *inputFile);
void SendDataToConsole(float *Temperature, int *SOC);
