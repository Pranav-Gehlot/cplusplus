/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//This code calculates discount amount based on purchase amount.
int main()
{  
    int purchaseAmt;
    double discount, rate;
    
    cin >> purchaseAmt;
    
    if ( purchaseAmt < 100 ) {
        rate = 0;
        discount = purchaseAmt;
        
    } else if (purchaseAmt >= 100 && purchaseAmt < 200) {
        rate = 0.1;
        discount = purchaseAmt - ( rate * purchaseAmt );
        
    } else if ( purchaseAmt >= 200 ) {
        rate = 0.15;
        discount = purchaseAmt - ( rate * purchaseAmt );
        
    } else {
        cout << "Invalid value";
    }
    
    cout << "Total = $" << discount;
    return 0;
}