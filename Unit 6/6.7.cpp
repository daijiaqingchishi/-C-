#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    string word;
    cout << "Enter words (q to quit): \n";
    cin >> word;
    int vowels = 0, others = 0, consonants = 0;
    while (word != "q")
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
            case 'a' :
            case 'A' :
            case 'e' :
            case 'E' :
            case 'i' :
            case 'I' :
            case 'o' :
            case 'O' :
            case 'u' :
            case 'U' :
                vowels++;
                break;
            default :
                consonants++;
            }
        }
        else
            others++;
        cin >> word;
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;
    return 0;
}
