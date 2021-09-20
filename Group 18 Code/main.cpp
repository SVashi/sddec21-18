#include <iostream>
#include <vector>
#include "RoomChallenge.h"
#include "CommonData.h"
using namespace std;

int main() {
    vector<double> data = readCSV("data.csv");
    showList(data);
    cout << '\n' << calculateAverage(data) << '\n';
    readData("commonData.txt");
    showList(globalVars);
    return 0;
}

