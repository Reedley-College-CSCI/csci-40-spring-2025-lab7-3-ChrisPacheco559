#include <iostream>
#include <fstream>
using namespace std;

struct TemperatureRecord {
    int day;
    int temperature;
};  // TODO: Step 1 - Define the struct TemperatureRecord
  // It should contain two integer fields: day and temperature.


// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(int&,TemperatureRecord[]); // TODO: Fix the parameters
void printTemperatures(const TemperatureRecord[], int);
//TemperatureRecord findMin(const ???); 
//TemperatureRecord findMax(const ???);
double findAverage(const TemperatureRecord[], int);

int main() {
    TemperatureRecord tempDays[MAX_DAYS];// TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    
    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file
    readTemperatures(size, tempDays);
    // TODO: Step 4 - Print the temperatures
     printTemperatures(tempDays, size);
    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array
void readTemperatures(int& size, TemperatureRecord temp[]) {
    ifstream inputFile("temps.txt");
    while (size < MAX_DAYS && inputFile >> temp[size].day >> temp[size].temperature) {
        size++;
    }
    inputFile.close();
}

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table
void printTemperatures(const TemperatureRecord temp[], int size) {
    cout << "Day " << " Temp" << endl;
    for (int i = 0; i < size; ++i) {
        cout << temp[size].day << " " << temp[size].temperature << endl;
    }
}

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
