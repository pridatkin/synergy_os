#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    ifstream ifile("coordinates.txt", ios::in);

    if (ifile.is_open())
    {
        string cordinates;
		double lat, lon;
        while (getline(ifile, cordinates))
        {
			stringstream ss(cordinates);

			ss.ignore(1); 
			ss >> lat;
			ss.ignore(2);
			ss >> lon;

			if(lat > 50 && lat < 80 && lon > 20 && lon < 45)

			cout << cordinates << "!!!" << endl;
        }
    }

    return 0;
}
