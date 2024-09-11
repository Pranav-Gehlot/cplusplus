/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
//Computes area of both rectangles using length & width & informs rectangle with greater area.
int main()
{
    int lengthOne, widthOne, lengthTwo, widthTwo;
    double areaOne, areaTwo;
    
    cout << "Enter length of first rectangle " << endl;
    cin >> lengthOne;
    
    cout << "Enter width of first rectangle " << endl;
    cin >> widthOne;
    
    cout << "Enter length of second rectangle " << endl;
    cin >> lengthTwo;
    
    cout << "Enter width of second rectangle " << endl;
    cin >> widthTwo;
    
    areaOne = lengthOne * widthOne;
    areaTwo = lengthTwo * widthTwo;
    
    if(areaOne > areaTwo) {
    cout << "The rectangle with the bigger area is rectangleOne" << endl;
    } else if(areaOne == areaTwo) {
    cout << "Both rectangles have the same area" << endl;
    } else {
        cout << "The rectangle with the bigger area is rectangleTwo" << endl;
    }
    return 0;
}