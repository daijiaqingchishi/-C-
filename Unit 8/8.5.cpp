#include <iostream>
using namespace std;
template<typename T>
T max5(T n[]);
int main()
{
    int n1[5] = {12, 32, 43, 12, 69};
    double n2[5] = {34.1, 54.1, 83.45, 96.0, 45};
    int m1 = max5(n1);
    cout << "m1 = " << m1 << endl;
    double m2 = max5(n2);
    cout << "m2 = " << m2 << endl;
    return 0;
}
template<typename T>
T max5(T n[])
{
    T max = n[0];
    for (int i = 1 ; i < 5 ; ++i)
    {
        if (n[i] > max)
            max = n[i];
    }
    return max;
}
