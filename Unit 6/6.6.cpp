#include <iostream>
#include <string>
using namespace std;
struct inf
{
    string name;
    double money;
};
int main()
{
    cout << "Please input the number of patrons: ";
    int n;
    cin >> n;
    cin.get();
    inf * p = new inf[n];
    cout << "Please enter the information of these patrons\n";
    for (int i = 0 ; i < n ; ++i)
    {
        cout << "Name #" << i+1 << ": ";
        getline(cin, p[i].name);
        cout << "Money #" << i+1 << ": ";
        cin >> p[i].money;
        cin.get();
    }
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
