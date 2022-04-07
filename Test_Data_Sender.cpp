#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "Data_Sender.h"

FILE* fptr;
float Temperature[TotalNoOfReadings];
int SOC[TotalNoOfReadings];

TEST_CASE("Check if data is read from the file")
 {
    fptr = fopen("SensorData.txt","r");
    REQUIRE(readDataFromFile(Temperature, SOC, fptr) == true);
}
