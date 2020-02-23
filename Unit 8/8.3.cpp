#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void change(string & s);
int main()
{
    string s;
    cout << "Enter a string (q to quit): ";
    getline(cin, s);
    for ( ; s != "q" ; )
    {
        change(s);
        cout << s << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, s);
    }
    cout << "Bye." << endl;
}
void change(string & s)
{
    for (int i = 0 ; s[i] != '\0' ; ++i)
    {
        s[i] = toupper(s[i]);
    }
}
