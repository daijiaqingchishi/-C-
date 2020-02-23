#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T n[], int num);
template <> char * maxn(char * n[], int num);
int main()
{
    int n1[6] = {1, 2, 3, 4, 5, 6};
    double n2[4] = {12.3, 53.2, 45.64, 78.0};
    char * n3[5] = {"zhou", "shizhou", "dai", "jia", "qing"};
    cout << "max1 = " << maxn(n1, 6) << endl;
    cout << "max2 = " << maxn(n2, 4) << endl;
    cout << "max3 = " << maxn(n3, 5) << endl;
    return 0;
}
template <typename T>
T maxn(T n[], int num)
{
    T max = n[0];
    for (int i = 1 ; i < num ; ++i)
    {
        if(n[i] > max)
            max = n[i];
    }
    return max;
}
template <> char * maxn(char * n[], int num)
{
    int max = 0;
    for (int i = 1 ; i < num ; ++i)
    {
        if (strlen(n[i]) > strlen(n[max]))
            max = i;
    }
    return n[max];
}
