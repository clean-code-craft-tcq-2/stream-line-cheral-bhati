bool readDataFromFile(float *Temperature, int *SOC, char *inputFile)
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
  fclose(BMSSensorDataFile_fp);
  return true;
  }
  return false;
}

void SendDataToConsole(float *Temperature, int *SOC)
{
  printf("Temperature SOC\n");
  for(int i = 0; i < TotalNoOfReadings; i++)
  {
    printf("%f\t%d\n",Temperature[i],SOC[i]);
  }
}

