/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//This asks the user's employment status & graduation status to see what they can qualify for.
int main()
{
    int employed, recentGrad;
    cout << "Are you employed? Enter 1 if yes and 0 if no" << endl;
    cin >> employed;
    
    if(employed == 0) {
        cout << "You must be employed to qualify." << endl;
    } else {
        cout << "Did you graduate from college in the past two years? Enter 1 if yes and 0 for no." << endl;
        cin >> recentGrad;
        if(recentGrad == 1) {
            cout << "You qualify for the special interest rate." << endl;
        } else {
            cout << "You must have graduated from college in the past two years to qualify." << endl;
        }
    }

    return 0;
}