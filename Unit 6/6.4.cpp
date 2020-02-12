#include <iostream>
using namespace std;
const int strsize = 20;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
void Menu();
int main()
{
    char ch;
    bop members[3] =
    {
        {"zhou", "shuai", "shi", 0},
        {"liao", "zhuang", "lao", 1},
        {"lei", "song", "xu", 2}
    };
    Menu();
    cout << "Enter your choice: ";
    do
    {
        cin >> ch;
        if (ch == 'a')
        {
            for (int i = 0 ; i < 3 ; ++i)
            {
                cout << members[i].fullname << endl;
            }
        }
        else if (ch == 'b')
        {
            for (int i = 0 ; i < 3 ; ++i)
            {
                cout << members[i].title << endl;
            }
        }
        else if (ch == 'c')
        {
            for (int i = 0 ; i < 3 ; ++i)
            {
                cout << members[i].bopname << endl;
            }
        }
        else if (ch == 'd')
        {
            for (int i = 0 ; i < 3 ; ++i)
            {
                if (members[i].preference == 0)
                    cout << members[i].fullname << endl;
                else if (members[i].preference == 1)
                    cout << members[i].title << endl;
                else
                    cout << members[i].bopname << endl;
            }
        }
        else
            break;
        cout << "Next choice: ";
    }while(1);
    cout << "Bye!\n";
    return 0;
}
void Menu()
{
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\t\tb. display by title" << endl;
    cout << "c. display by bopname\t\td. display by preference" << endl;
    cout << "q. quit" << endl;
}
