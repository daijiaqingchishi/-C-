#include <iostream>
using namespace std;
double Aver(double a, double b);
int main()
{
    double a, b;
    cout << "Please enter two numbers (0 to quit): ";
    cin >> a >> b;
    while (a && b)
    {
        cout << "The harmean of " << a << " and " << b;
        cout << " is " << Aver(a, b) << endl;
        cout << "Please enter another two numbers (0 to quit): ";
        cin >> a >> b;
    }
    cout << "Bye!\n";
    return 0;
}
double Aver(double a, double b)
{
    double harmean;
    harmean = 2.0 * a * b / (a + b);
    return harmean;
}
