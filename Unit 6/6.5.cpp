#include <iostream>

int main()
{
    using namespace std;
    double income;
    cout << "Please enter your income(enter minus or non-number to quit): ";
    while ((cin >> income) && income >= 0)
    {
        if (income <= 5000)
            cout << "Your income tax is " << 0 << " tvarp" << endl;
        else if (income > 5000 && income <=15000)
            cout << "Your income tax is " << (income-5000) * 0.1 << "tvarp" << endl;
        else if (income > 15000 && income <=35000)
            cout << "Your income tax is " << 10000 * 0.1 +(income-15000) * 0.15 << "tvarp" << endl;
        else
            cout << "Your income tax is " << 10000 * 0.1 + 20000 * 0.2 +(income-35000) * 0.2 << "tvarp" << endl;
        cout << "Please enter your income(enter minus or non-number to quit): ";
    }
    cout << "Program terminated.\n";
    return 0;
}
