/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int items;
string produceName;
double price;
char sign;
//This code computes the cost for the produce by multiplying price times items
    cout << "Enter the # of items: " << endl;
    cin >> items;
    cin.ignore(); // to ignore ENTER pressed after 2
    cout << "Enter the name of the produce: " << endl;
    // cin >> produceName;
    getline(cin, produceName);
    cout << "Enter the price: " << endl;
    cin >> price;
    cout << "Enter the sign: " << endl;
    cin >> sign;
    cout << "The cost of " << produceName << " is " << sign << price*items << endl;
    return 0;
}