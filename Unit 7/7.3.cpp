#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void volume(box * b1);
void show(box b1);
int main()
{
    box b1;
    cout << "Please enter the maker of b1: ";
    cin.getline(b1.maker, 40);
    cout << "Enter the height, width and length of b1: ";
    cin >> b1.height >> b1.width >> b1.length;
    volume(&b1);
    show(b1);
    return 0;
}
void volume(box * b1)
{
    b1->volume  = b1->height * b1->width * b1->length;
}
void show(box b1)
{
    cout << "maker: " << b1.maker << endl;
    cout << "height: " << b1.height << endl;
    cout << "width: " << b1.width << endl;
    cout << "length: " << b1.length << endl;
    cout << "volume: " << b1.volume << endl;
}
