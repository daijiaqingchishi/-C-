#include <iostream>
using namespace std;
double calculate(double x, double y, double (*pf)(double, double));
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
int main()
{
    double (*pf[3])(double, double) = {add, subtract,multiply};
    cout << "Please enter two double: ";
    double a, b;
    cin >> a >> b;
    while (cin)
    {
        cout << calculate(a, b, pf[0]) << endl;
        cout << calculate(a, b, pf[1]) << endl;
        cout << calculate(a, b, pf[2]) << endl;
        cout << "Please enter two double: ";
        cin >> a >> b;
    }
    cout << "Done.\n";
    return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return pf(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}
