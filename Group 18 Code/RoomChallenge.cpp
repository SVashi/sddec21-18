#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

//Currently just reading a test csv, needs to be changed to full csv
vector<double> readCSV(string file)
{
    vector<double> result;
    string line;
    ifstream data (file);
    if (data.is_open())
    {
        while (getline(data, line))
        {
            stringstream ss(line);
            string datapoint;
            while (getline(ss, datapoint, ','))
            {
                result.push_back(stod(datapoint));
            }
        }
        data.close();
    }
    else
    {
        cout << "Error, couldn't open file";
    }
    return result;
}

//Used for testing purposes
void showList(vector<double> data)
{
    for (auto iter = data.begin(); iter != data.end(); ++iter)
    {
        cout << *iter << " ";
    }
}

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