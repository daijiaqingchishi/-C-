#include <iostream>
long fact(int n);
int main()
{
    using namespace std;
    cout << "Please input an integer: ";
    int i;
    cin >> i;
    cout << i << "! = " << fact(i) << endl;
    return 0;
}
long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n*fact(n-1);
}
