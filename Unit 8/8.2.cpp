#include <iostream>
#include <cstring>
using namespace std;
const int Max = 40;
struct CandyBar
{
    char name[Max];
    double weight;
    int heat;
};
void enter(CandyBar & c, const char * n = "Millennium Munch", double w = 2.85, int h = 350);  //这里用const char * 使得左右值类型相同
void show(const CandyBar & c);
int main()
{
    CandyBar c;
    char n[Max];
    double w;
    int h;
    enter(c);
    show(c);
    cout << "Please enter the candybar's name: ";
    cin.getline(n, Max);
    cout << "Please enter the weight: ";
    cin >> w;
    cout << "Please enter the heat: ";
    cin >> h;
    enter(c, n, w, h);
    show(c);
    return 0;
}
void enter(CandyBar & c, const char * n, double w, int h)
{
    strcpy(c.name, n);
    c.weight = w;
    c.heat = h;
}
void show(const CandyBar & c)
{
    cout << "name: " << c.name << endl;
    cout << "weight: " << c.weight << endl;
    cout << "heat: " << c.heat << endl;
}
