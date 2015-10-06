/*************************
  This program converts degrees Fahrenheit to degrees Celsius
  CIS 22A - Lab 1
  Author: Willis Wang
  Date: 10/10/2014
************************/

#include <iostream>

using namespace std;

int main()
{
    //fahr is the variable for degrees Fahrenheit while cel is the variable for degrees Celsius
    int fahr, cel;
    cout << "What is the temperature in Fahrenheit?" << endl;
    //fahr value is inputed
    cin >> fahr;
    //This is the formula of conversion
    cel = (fahr - 32)*((5.000)/(9.000));
    cout << "The temperature in Celsius is " << cel << " degrees." << endl;
    return 0;
}
