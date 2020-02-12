#include <iostream>
using namespace std;
const int Max = 10;
int fill(double scores[]);
void show(double scores[], int n);
void aver(double scores[], int n);
int main()
{
    double scores[Max];
    cout << "Please enter your scores (Max is 10), and type non-number to quit: ";
    int n = fill(scores);
    cout << n << " scores have been entered.\n";
    show(scores, n);
    aver(scores, n);
    return 0;
}
int fill(double scores[])
{
    int i = 0;
    for ( ; i < Max ; ++i)
    {
        cin >> scores[i];
        if (!cin) break;
    }
    return i;
}
void show(double scores[], int n)
{
    for (int i = 0 ; i < n ; ++i)
    {
        cout << "score #" << i+1 << " : " << scores[i] << endl;
    }
}
void aver(double scores[], int n)
{
    double sum = 0.0;
    for (int i = 0 ; i < n ; ++i)
    {
        sum += scores[i];
    }
    cout << "The average score is " << sum / n << endl;
}
