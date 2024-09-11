/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{   int a;
    int b;
    int c;
    cout << "Enter # of minutes: to drive from your friend's place to your place: " << endl;
    cin >> a;
    cout << "Enter # of minutes to drive from your place to the movies: " << endl; 
    cin >> b;
    cout << "Enter the minute of the day when the film starts " << endl;
    cin >> c;
    cout << " \n" << c-(a+b) << endl;
    return 0;
}