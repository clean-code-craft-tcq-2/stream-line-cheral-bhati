
bool readDataFromFile(FILE* SensorDataFile, float sensorData[])
{
    if (SensorDataFile == NULL)
    {
	printf("file cannot be opened \n");
	return false;
    }

    int FileIndex;
    for (FileIndex = 0; fscanf(SensorDataFile, "%f", &sensorData[i]) != EOF; FileIndex++)
    {
    	//do nothing
    }

    fclose(SensorDataFile);
    printToConsole(sensorData);
    return true;
}
