/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double bagel;
    double cost;
    double coffee;
    cout << "# of bagels purchased: " << endl;
    cin >> bagel;
    cout << "# of coffees purchased: " << endl;
    cin >> coffee;
    const double BAGELCOST=1.99*bagel;
    const double COFFEECOST=coffee*1.2;
    double subTotal= COFFEECOST + BAGELCOST;
    double tax=0.0825*subTotal;
    double totalCost= tax + subTotal;

    cout << "Tax= $" << setprecision(2) << tax << endl;
    cout << "Subtotal = $" << setprecision(4) << subTotal << endl;
    cout << "Total Cost = $" << setprecision(4) << totalCost << endl;
    return 0;
}