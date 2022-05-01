#include <stdio.h>
#include "Data_Sender.h"
printf("Welcome");
void readDataFromFile(float *Temperature, int *SOC, char *inputFile)
{
  float TemperatureData;
  int SOCData;
  int FileIndex;
  
  FILE *SensorDataFile = fopen(inputFile,"r");
  if (SensorDataFile != NULL)
  {
     for(FileIndex = 0; fscanf(SensorDataFile, "%f %d\n", &TemperatureData, &SOCData)!=EOF; FileIndex++)
    {
      Temperature[FileIndex] = TemperatureData;
      SOC[FileIndex] = SOCData;
    }
  fclose(SensorDataFile);
   }
  else
    printf("error");
}

void SendDataToConsole(float *Temperature, int *SOC)
{
  printf("Temperature SOC\n");
  for(int ReadingIndex = 0; ReadingIndex < TotalNoOfReadings; ReadingIndex++)
  {
    printf("%f\t%d\n",Temperature[ReadingIndex],SOC[ReadingIndex]);
  }
}

void SenderData(float *Temperature, int *SOC, char *inputFile)
{
  readDataFromFile(Temperature,SOC,inputFile);
  SendDataToConsole(Temperature,SOC);
}
