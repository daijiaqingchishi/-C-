#include <iostream>
#include <cstring>
#include <new>
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
char zs[400];

int main()
{
    chaff * p1 = new (zs) chaff [2];
    chaff * p2 = new (zs + 2 * sizeof(chaff)) chaff[2];
    for (int i = 0 ; i < 2 ; i++)
    {
        strcpy(p1[i].dross, "daijiaqing");
        p1[i].slag = i + 100;
    }
    for (int i = 0 ; i < 2 ; i++)
    {
        strcpy(p2[i].dross, "wujiajiong");
        p2[i].slag = i - 100;
    }
    for (int i = 0 ; i < 2 ; i++)
    {
        cout << "chaff p1 " << i+1 << endl;
        cout << "dross: " << p1[i].dross;
        cout << "slag: " << p1[i].slag << endl;
    }
    for (int i = 0 ; i < 2 ; i++)
    {
        cout << "chaff p2 " << i+1 << endl;
        cout << "dross: " << p2[i].dross;
        cout << "slag: " << p2[i].slag << endl;
    }
}
