#include <iostream>
using namespace std;
const int Max = 30;
int Fill_array(double array[], int n);
void Show_array(const double array[], int n);
void Reverse_array(double array[], int n);
int main()
{
    double array[Max];
    int n;
    n = Fill_array(array, Max);
    Show_array(array, n);
    Reverse_array(array, n);
    Show_array(array, n);
    return 0;
}
int Fill_array(double array[], int n)
{
    int i;
    for (i=0 ; i<n ; ++i)
    {
        cout << "Enter array #" << i+1 << ": ";
        cin >> array[i];
        if (!cin) break;
    }
    return i;
}
void Show_array(const double array[], int n)
{
    for (int i = 0 ; i < n ; ++i)
    {
        cout << "array #" << i+1 << " = " << array[i] << endl;
    }
}
void Reverse_array(double array[], int n)
{
    double temp;
    for (int i = 1 ; i<n-2 ; ++i, --n)
    {
        temp = array[i];
        array[i] = array[n-2];
        array[n-2] = temp;
    }
}
