#include <iostream>
#include <string>
using namespace std;

int main()
{
    string months[12] = { "January",
                           "February",
                           "March",
                           "April",
                           "May",
                           "June",
                           "July",
                           "August",
                           "September",
                           "October",
                           "November",
                           "December"};
    int sale[12];
    for (int i = 0 ; i<12 ; ++i)
    {
        cout << "Please input the sales volume of " << months[i] << endl;
        cin >> sale[i];
    }
    int sum = 0;
    for (int i = 0 ; i<12 ; ++i)
    {
        cout << "The sales volume of " << months[i] << " is " << sale[i] << endl;
        sum += sale[i];
    }
    cout << "And the sales volume of this year is " << sum << endl;
    return 0;
}
