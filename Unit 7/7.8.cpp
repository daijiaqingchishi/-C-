/*
#include <iostream>
using namespace std;
const int Seasons = 4;
const char * snames[Seasons] =
{
    "Spring", "Summer", "Fall", "Winter"
};
void fill(double expenses[]);
void show(double expenses[]);
int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}
void fill(double expenses[])
{
    for (int i = 0 ; i < Seasons ; ++i)
    {
        cout << "Enter " << snames[i] << " expenses: ";
        cin >> expenses[i];
    }
}
void show(double expenses[])
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0 ; i < Seasons ; ++i)
    {
        cout << snames[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
*/

#include <iostream>
using namespace std;
const int seasons = 4;
const char * snames[seasons] =
{
    "Spring", "Summer", "Fall", "Winter"
};
struct expenses
{
    double e[seasons];
};
void fill(expenses * i);
void show(expenses i);
int main()
{
    expenses i;
    fill(&i);
    show(i);
    return 0;
}
void fill(expenses * i)
{
    for (int j = 0 ; j < seasons ; ++j)
    {
        cout << "Enter " << snames[j] << " expenses: ";
        cin >> i->e[j];
    }
}
void show(expenses i)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int j = 0 ; j < seasons ; ++j)
    {
        cout << snames[j] << ": $" << i.e[j] << endl;
        total += i.e[j];
    }
    cout << "Total Expenses: $" << total << endl;
}
