#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "Data_Sender.h"


float Temperature[TotalNoOfReadings];
int SOC[TotalNoOfReadings];

TEST_CASE("Check if data is read from the file")
 {
    FILE* fptr = fopen("./SensorData.txt","r");
    REQUIRE(readDataFromFile(Temperature, SOC, fptr) == true);
}
