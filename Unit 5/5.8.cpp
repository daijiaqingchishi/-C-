#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Enter words (to stop, type the word done):" << endl;
    char word[20];
    int i = 0;
    for ( ; strcmp(word, "done") ; ++i)
    {
        cin >> word;
    }
    cout << "You entered a total of " << i-1 << " words.";
    return 0;
}
