/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int radius;
    cout << "Enter radius: " << endl;
    cin >> radius;
    
    if(radius > 0) {
        cout << "Area : " << (3.14 * radius * radius) << endl;
        cout << "Perimeter : " << (2 * 3.14 * radius) << endl;
    } else {
        cout << "Radius needs to be a positive value";
        
    }
    return 0;
}