#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    double Daphne = 100;
    double Cleo = 100;
    do
    {
        i += 1;
        Daphne += 10;
        Cleo += Cleo*0.05;
    }while(Daphne >= Cleo);
    cout << "It takes " << i << " years" << endl;
    cout << "Now" << endl;
    cout << "Daphne has " << Daphne << " dollars\n";
    cout << "Cleo has " << Cleo << " dollars";
    return 0;
}
