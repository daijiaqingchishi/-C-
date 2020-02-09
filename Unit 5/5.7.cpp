#include <iostream>
#include <string>
using namespace std;

struct Car
{
    string producer;
    int year;
};

int main()
{
    cout << "How many cars do you wanna catalog?";
    int ncar;
    (cin >> ncar).get();
    Car * cars = new Car[ncar];
    for (int i = 0 ; i < ncar ; ++i)
    {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].producer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }
    cout << "Here is your collection: \n";
    for (int i = 0 ; i < ncar ; ++i)
    {
        cout << cars[i].year << " " << cars[i].producer << endl;
    }
    delete [] cars;
    return 0;
}
