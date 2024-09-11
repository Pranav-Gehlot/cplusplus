/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//This program asks the name to output their closing for the email
int main()
{
string sender;
cout << "Enter sender: " << endl;
getline(cin, sender);
cout << "Warm regards, " << endl;
cout << sender << endl;

    return 0;
}