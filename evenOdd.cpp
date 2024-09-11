/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    if(num % 2 == 0) {
        cout << "Number is Even" << endl;
    } else {
        cout << "Number is Odd" << endl;
    }
    return 0;
}