

#include <iostream>
#include <string>
using namespace std;
int main()
{   int num;
    string go;
//This asks the user to enter the number twice to output the swapped number using strings and the other method using division.
    cout << "Enter Number twice: " << endl;
    cin >> num;
    cin >> go;
    int tens=num/10;
    int mod=num%10;
    char first=go.at(0);
    char last= go.at(go.length()-1);
    cout << mod << tens << endl;
    cout << last << first << endl;
    return 0;
}