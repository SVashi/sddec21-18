#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<double> globalVars;
/*
 * globalVars def needs to be removed in the final build, but for testing purposes as we figure out our final values,
 * here are the global vars stored in this array:
 * [0] = crankValue
 */

void readData(string file)
{
    vector<double> result;
    string line;
    ifstream data (file);
    if (data.is_open())
    {
        while (getline(data, line))
        {
            if (line[0] != '#')
            {
                globalVars.push_back(stod(line));
            }
        }
        data.close();
    }
    else
    {
        cout << "Error, couldn't open file";
    }
}
