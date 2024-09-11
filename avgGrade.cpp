/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int grade1, grade2, grade3;
    double avg;
    
    cout << "Enter grade 1: " << endl;
    cin >> grade1;
    cout << "Enter grade 2: " << endl;
    cin >> grade2;
    cout << "Enter grade 3: " << endl;
    cin >> grade3;
    avg = ( grade1 + grade2 + grade3 ) / 3;
    cout << "Average: " << avg << endl;
    if( avg >= 95 ) {
        cout << "Congratulations!" << endl;
    } else {
        cout << "Grade did not meet the bar" << endl;
    }
    return 0;
}