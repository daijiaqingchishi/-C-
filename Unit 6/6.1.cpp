#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    cout << "Please enter text, and type @ to terminate.\n";
    cin.get(ch);
    while(ch != '@')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        if (!isdigit(ch))
            cout << ch;
        cin.get(ch);
    }
    return 0;
}
