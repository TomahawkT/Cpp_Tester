#include <iostream>

using namespace std;

int main(void)
{
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Hello " << name << endl;
    
    int var1, var2;
    cout << &var1 << " " << &var2 << endl;
    return 0;
}