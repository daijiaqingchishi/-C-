#include <iostream>
using namespace std;
const int Max = 5;
double * fill_array(double * begin, int Max);
void show_array(double * begin, double * end);
void revalue(double r, double * begin, double * end);
int main()
{
    double p[Max];

    double * e = fill_array(p, Max);
    show_array(p, e);
    if (p != e)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, p, e);
        show_array(p, e);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}
double * fill_array(double * begin, int Max)
{
    double temp;
    int i;
    double * p = begin;
    for(i = 0 ; i < Max ; ++i)
    {
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *(p+i) = temp;
    }
    return (p+i);
}
void show_array(double * begin, double * end)
{
    double * p = begin;
    for ( ; p != end ; ++p)
    {
        cout << "Property #" << (p-begin)+1 << ": $";
        cout << *p << endl;
    }
}
void revalue(double r, double * begin, double * end)
{
    for (double * p = begin ; p != end ; ++p)
        *p *= r;
}
