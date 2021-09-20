#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<double> readData(string file)
{
    vector<double> result;
    string line;
    ifstream data (file);
    if (data.is_open())
    {
        int average;
        int count;
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
void showlist(vector<double> data)
{
    for (auto iter = data.begin(); iter != data.end(); ++iter)
    {
        cout << *iter << " ";
    }
}
