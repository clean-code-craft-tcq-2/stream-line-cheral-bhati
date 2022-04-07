#include <stdio.h>

#define TotalNoOfReadings 50

void readDataFromFile(float *Temperature, int *SOC, char *inputFile);
void SendDataToConsole(float *Temperature, int *SOC);
void SenderData(float *Temperature, int *SOC, char *inputFile);
