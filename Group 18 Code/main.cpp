#include <iostream>
#include <vector>
#include "RoomChallenge.h"
using namespace std;

//Currently just reading a test csv, needs to be changed to full csv

//Returns average to compare to main value
double calculateAverage(vector<double> data)
{
    double average;

    for (auto iter = data.begin(); iter != data.end(); ++iter)
    {
        average = average + *iter;
    }
    return average/data.size();
}

int main() {
    vector<double> data = readData("data.csv");
    showlist(data);
    cout << '\n' << calculateAverage(data);
    return 0;
}

