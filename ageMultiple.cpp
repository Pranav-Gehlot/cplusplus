/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Age: " << endl;
   cin >> n;
   if(n % 5 == 0) {
       cout << "Age is multiple of 5" << endl;
       
   } else {
       cout << "Age is NOT a multiple of 5" << endl;
   }
    return 0;
}