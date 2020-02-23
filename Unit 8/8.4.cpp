#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str;
    int ct;
};
void set(stringy & beany, char testing[]);
void show(const stringy & beany, int n = 1);
void show(const char * p, int n = 1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}
void set(stringy & beany, char testing[])
{
    char * ps = new char [strlen(testing)+1];
    strcpy(ps, testing);
    beany.str = ps;
    beany.ct = strlen(testing);
}
void show(const stringy & beany, int n)
{
    for (int i = 1 ; i <= n ; ++i)
    {
        cout << "string: " << beany.str << endl;
        cout << "ct: " << beany.ct << endl;
    }
}
void show(const char * p, int n)
{
    for (int i = 1 ; i <= n ; ++i)
    {
        cout << p << endl;
    }
}
