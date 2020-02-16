#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct inf
{
    string name;
    double money;
};
int main()
{
    ifstream infile;
    infile.open("data.txt");
    int n;
    infile >> n;
    infile.get();
    inf * p = new inf[n];
    for (int i = 0 ; i < n ; ++i)
    {
        getline(infile, p[i].name);
        infile >> p[i].money;
        infile.get();
    }
    infile.close();
    cout << "Grand Patrons: " << endl;
    int sign = 0;
    for (int i = 0 ; i < n ; ++i)
    {
        if (p[i].money > 10000)
        {
            cout << p[i].name << "\t\t" << p[i].money << endl;
            sign = 1;
        }
    }
    if (sign == 0)
        cout << "none" << endl;
    sign = 0;
    cout << "Patrons: " << endl;
    for (int i = 0 ; i < n ; ++i)
    {
        if (p[i].money <= 10000)
        {
            cout << p[i].name << endl;
            sign = 1;
        }
    }
    if (sign == 0)
        cout << "none" << endl;
    delete [] p;
    return 0;
}
