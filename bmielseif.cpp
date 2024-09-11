/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//This code takes the weight, height and calculates their bmi using else if statements.
int main()
{  
  double weight, bmi, height;

    cout << "Weight: " << endl;
    cin >> weight;
    cout << "Height: " << endl;
    cin >> height;
    bmi = ( weight / ( height * height )) * 703;
    if ( bmi <= 18.5) {
        cout << "UNDERWEIGHT" << endl;
    } else if ( bmi > 18.5 && bmi < 25 ) {
        cout << "NORMAL" << endl;
} else {
    cout << "OVERWEIGHT" << endl;
}
    

    return 0;
}