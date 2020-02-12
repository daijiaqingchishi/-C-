#include <iostream>
using namespace std;
long double pro(unsigned a, unsigned b);
int main()
{
    double total, choices, special;
    cout << "Enter the total number of choices on the game, the number ";
    cout << "of picks allowed and the special number: ";
    while ((cin >> total >> choices >> special) && total>=choices)
    {
        cout << "You have one chance in ";
        cout << pro(total, choices) * special;
        cout << " of winning.\n";
        cout << "Next three numbers (q to quit): ";
    }
    cout << "Bye.\n";
    return 0;
}
long double pro(unsigned a, unsigned b)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = a, p = b ; p > 0 ; n--, p--)
    {
        result *= n / p;
    }
    return result;
}
