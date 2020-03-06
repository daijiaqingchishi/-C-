#include <iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student ps[], int n);
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0 ; i < entered ; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    for ( ; i < n ; i++)
    {
        cout << "Please input student " << i + 1 << "'s information: " << endl;
        cout << "fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        if (strlen(pa[i].fullname) == 0)
            break;
        cout << "hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    cout << "Total " << i << " student's information entered." << endl;
    return i;
}

void display1(student st)
{
    cout << "fullname: " << st.fullname << endl;
    cout << "hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;
    cout << endl;
}

void display2(const student * ps)
{
    cout << "fullname: " << ps->fullname << endl;
    cout << "hobby: " << ps->hobby << endl;
    cout << "ooplevel: " << ps->ooplevel << endl;
    cout << endl;
}

void display3(const student ps[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << "fullname: " << ps[i].fullname << endl;
        cout << "hobby: " << ps[i].hobby << endl;
        cout << "ooplevel: " << ps[i].ooplevel << endl;
        cout << endl;
    }
}
