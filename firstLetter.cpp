/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int main()
{   string obj;
    cout << "Enter object: " << endl;
    cin >> obj;
    cout << obj.at(0) << endl;

    return 0;
}