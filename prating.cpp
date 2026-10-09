
#include <iostream>
using namespace std;

class Personal
{
    int Age;
    char Name[10], Address[20], City[10], B_Group[5], Phone_No[15];

public:
    void get();
    void disp();
};

void Personal::get()
{
    cout << "\n*************** Input ***************\n";

    cout << "\nEnter Name: ";
    cin >> Name;

    cout << "Enter Age: ";
    cin >> Age;

    cout << "Enter B_Group: ";
    cin >> B_Group;

    cout << "Enter Address: ";
    cin >> Address;

    cout << "Enter City: ";
    cin >> City;

    cout << "Enter Phone_No: ";
    cin >> Phone_No;
}

void Personal::disp()
{
    cout << "\n*************** Output ***************\n";

    cout << "\nThe Name is: " << Name << endl;
    cout << "The Age is: " << Age << endl;
    cout << "The B_Group is: " << B_Group << endl;
    cout << "The Address is: " << Address << endl;
    cout << "The City is: " << City << endl;
    cout << "The Phone_No is: " << Phone_No << endl;

    cout << "**************************************\n";
}

int main()
{
    Personal p;
    p.get();
    p.disp();

    return 0;
}
