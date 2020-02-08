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
    int sale[3][12];
    for (int i = 0 ; i<3 ; ++i)
    {
        cout << "Year " << i+1 << endl;
        for (int j =0 ; j<12 ; ++j)
        {
        cout << "Please input the sales volume of " << months[j] << endl;
        cin >> sale[i][j];
        }
    }
    for (int i = 0 ; i<3 ; ++i)
    {
        cout << "Year " << i+1 << endl;
        int sum = 0;
        for (int j = 0 ; j<12 ; ++j)
        {
        cout << "The sales volume of " << months[j] << " is " << sale[i][j] << endl;
        sum += sale[i][j];
        }
        cout << "And the sales volume of this year is " << sum << endl;
    }
    return 0;
}
