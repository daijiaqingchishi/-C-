#include <iostream>
using namespace std;
const int Max = 40;
void stupid(char str[], int n = 0);
int main()
{
    char str[Max];
    cout << "Please enter a string: ";
    cin.getline(str, Max);
    stupid(str);
    cout << "Enter another string: ";
    cin.getline(str, Max);
    stupid(str, 1);
    cout << "Enter another string: ";
    cin.getline(str, Max);
    stupid(str, 2);
    return 0;
}
void stupid(char str[], int n)
{
    static int count = 1;   //函数内的静态静态变量初始化只在第一次调用时生效
    if(n)
    {
        for (int i = 1 ; i <= count ; ++i)
        {
            cout << str << endl;
        }
    }
    else
        cout << str << endl;
    ++count;
}
