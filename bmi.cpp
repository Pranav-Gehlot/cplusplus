/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//This code calculates bmi based on weight & height and evaluates if they're overweight, normnal weight, or underweight
int main()
{
    double weight, height;
    double bmi;
    cout << "Weight: " << endl;
    cin >> weight;
    cout << "Height: " << endl;
    cin >> height;
    bmi = ( weight / ( height * height )) * 703;
    if ( bmi <= 18.5) {
        cout << "UNDERWEIGHT" << endl;
    } if ( bmi > 18.5 && bmi < 25 ) {
        cout << "NORMAL" << endl;
} if ( bmi >= 25) {
    cout << "OVERWEIGHT" << endl;
}
    
    return 0;
}