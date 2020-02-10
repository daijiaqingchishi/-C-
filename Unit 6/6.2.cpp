#include <iostream>
const int Max = 10;
int main()
{
    using namespace std;
    double number[Max];
    cout << "Please enter some numbers: " << endl;
    cout << "The maximum is " << Max << endl;
    cout << "Type not-a-number to terminate.\n";
    int i, count = 0;
    double sum =0.0;
    for (i = 0 ; i < Max ; ++i)
    {
        cout << "Number " << i+1 << " : ";
        if (!(cin >> number[i]))
            break;
        sum += number[i];
    }
    if (i == 0)
    {
        cout << "No number!\n";
        exit(-1);
    }
    for (int j = 0 ; j <= i ; ++j)
    {
        if (number[j] > sum / i)
            ++count;
    }
    cout << fixed;
    cout.precision(2);
    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum / i << endl;
    cout << "Count = " << count << endl;
}
