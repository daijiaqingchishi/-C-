//main.cpp
#include <iostream>
#include "golf.h"

int main()
{
    using namespace std;
    golf g[3];
    int sign = 1;
    int i;
    for (i = 0 ; i < 3 && sign == 1; i++)
    {
        sign = setgolf(g[i]);
    }
    for (int j = 0 ; j < i ; j++)
    {
        cout << "g " << j+1 << ": ";
        showgolf(g[j]);
    }
    setgolf(g[0], "zhoushi", 123);
    showgolf(g[0]);
    handicap(g[0], 124);
    showgolf(g[0]);
    return 0;
}


//golf.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    using std::cout;
    using std::cin;
    char name[Len];
    int hc;
    cout << "Enter the fullname: ";
    if (cin.get(name, Len))
    {
        strcpy(g.fullname, name);
        cout << "Enter the handicap: ";
        cin >> hc;
        cin.get();
        g.handicap = hc;
        return 1;
    }
    else
        return 0;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    using std::cout;
    using std::endl;
    cout << "Fullname: " << g.fullname << "   ";
    cout << "Handicap: " << g.handicap << endl;
    cout << endl;
}


//golf.h
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
