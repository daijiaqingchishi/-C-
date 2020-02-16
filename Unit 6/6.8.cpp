#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    char ch;
    char filename[20];
    int count = 0;
    cout << "Please input the filename: ";
    cin.getline(filename, 20);
    ifstream infile;
    infile.open(filename);

    while(infile >> ch)
    {
        count++;
    }

    cout << count << " characters" << endl;
    infile.close();
    return 0;
}
