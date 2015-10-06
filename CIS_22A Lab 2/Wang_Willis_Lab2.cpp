/*************************
  This program converts temperature to degrees Fahrenheit or degrees Celsius
  CIS 22A - Lab 2
  Author: Willis Wang
  Date: 10/17/14
************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    double temp1; //temp1 is the original inputed temperature and is set as a double so program would not go crazy when a decimal is inputed
    int temp_f, loop; //temp_f is the outputted final temperature while loop helps loop the program
    string kind; //Kind determines whether the inputed temperature is in degrees Fahrenheit or degrees Celsius

    //This block outputs the first few questions and inputs their values
    cout << "What is the temperature right now?" << endl;
    cin >> temp1;
    cin.ignore();

    //This block is used if anything but a number is entered into temp1 variable and if there is not a number, it asks if the value is in Fahrenheit or Celsius
    while (loop != 2)
    {
        if (cin.fail())
        {
            cout << "I do not recognize that as a temperature value. Please re-enter." << endl;
            cin.clear();
            cin.ignore();
            cin >> temp1;
            cin.ignore();
        }
        else
        {
            cout << "Is the temperature you inputed in Degrees Fahrenheit or Degrees Celsius?" << endl;
            getline(cin, kind);
            loop = 2;
        }

    }


    //This statement loops the program until the variable loop is set equal to 345
    while (loop != 1)
    {

        //This block converts Fahrenheit to Celsius
        if (kind == "Fahrenheit" || kind == "fahrenheit" || kind == "Degrees Fahrenheit" || kind == "degrees fahrenheit" ||  kind == "f" || kind == "F" || kind == "degrees Fahrenheit")
        {
            temp_f = (5.00/9.00) * (temp1 - 32);
            cout << "The temperature in degrees Celsius is " << temp_f << "." << endl;
            loop = 1;
            return 0;
        }

        //This block converts Celsius to Fahrenheit
        else if (kind == "Celsius" || kind == "celsius" || kind == "Degrees Celsius" || kind == "degrees celsius" || kind == "c" || kind == "C" || kind == "degrees Celsius")
        {
            temp_f = ((9.00/5.00) * temp1) + 32;
            cout << "The temperature in degrees Fahrenheit is " << temp_f << "." << endl;
            loop = 1;
            return 0;
        }

        //This block is used if the program does not recognize what is inputed into the variable kind
        else
        {
            cout << "I do not recognize " << kind << ". Please re-enter your temperature value.\n";
            cin.clear();
            cin >> temp1;
            cin.ignore();
            loop = 4;

            //This block is used if anything but a number is entered into temp1 variable
            while (loop != 3)
            {
                if (cin.fail())
                {
                    cout << "I do not recognize that as a temperature value. Please re-enter." << endl;
                    cin.clear();
                    cin.ignore();
                    cin >> temp1;
                    cin.ignore();
                }
                else
                {
                    cout << "Is your temperature in Degrees Fahrenheit or Degrees Celsius?\n";
                    getline (cin, kind);
                    loop = 3;
                }
            }
        }
    }
}

