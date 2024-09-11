/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//This code takes the temperature & advises the user what to wear.
int main()
{
    int temp;
    cout << "Enter temperature: " << endl;
    cin >> temp;
    if(temp <= 40) {
        cout << "grab a coat, winter hat & gloves" << endl;
    } else if(temp <= 65) {
        cout << "Get a light jacket" << endl;
    } else if(temp <= 75) {
        cout << "Long sleeve outfit should be good" << endl;
    } else {
        cout << "put on sunscreen & wear a summer hat" << endl;
    }
    return 0;
}