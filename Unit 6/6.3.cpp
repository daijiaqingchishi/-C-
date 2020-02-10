#include <iostream>
using namespace std;
void Menu();
int main()
{
    Menu();
    char ch;
    again : cin >> ch;
    switch (ch)
    {
    case 'c' :
        cout << "carnivore" << endl;
        break;
    case 'p' :
        cout << "pianist" << endl;
        break;
    case 't' :
        cout << "tree" << endl;
        break;
    case 'g' :
        cout << "game" << endl;
        break;
    default :
        cout << "Please enter a c, p, t, or g: ";
        goto again;
    }
    return 0;
}
void Menu()
{
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) caenivore\t\tp) pianist" << endl;
    cout << "t) tree \t\tg)game" << endl;
}
