/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int ui;
    cout << "Enter password: " << endl;
    cin >> ui;
    if( ui == 1234 ) {
        cout << "Welcome back user" << endl;
    } else {
        cout << "The password is incorrect" << endl;
    }
    return 0;
}