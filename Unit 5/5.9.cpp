#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter words (to stop, type the word done):" << endl;
    string word;
    int i = 0;
    for ( ; word != "done" ; ++i)
    {
        cin >> word;
    }
    cout << "You entered a total of " << i-1 << " words." << endl;
    return 0;
}
