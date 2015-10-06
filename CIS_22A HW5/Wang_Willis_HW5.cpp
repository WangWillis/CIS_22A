#include <iostream>

using namespace std;

int number;

int main()
{
    cout << "Please enter a number between 1 and 10." << endl;
    cin >> number;

    switch(number)
    {
    case 1:
        cout << "The Roman number for 1 is: I" << endl;
        break;
    case 2:
        cout << "The Roman number for 2 is: II" << endl;
        break;
    case 3:
        cout << "The Roman number for 3 is: III" << endl;
        break;
    case 4:
        cout << "The Roman number for 4 is: IV" << endl;
        break;
    case 5:
        cout << "The Roman number for 5 is: V" << endl;
        break;
    case 6:
        cout <<  "The Roman number for 6 is: VI" << endl;
        break;
    case 7:
        cout << "The Roman number for 7 is: VII" << endl;
        break;
    case 8:
        cout << "The Roman number for 8 is: VIII" << endl;
        break;
    case 9:
        cout << "The Roman number for 9 is: IX" << endl;
        break;
    case 10:
        cout << "The Roman number for 10 is: X" << endl;
        break;
    default:
        cout << "I'm sorry that is not a valid input." << endl;
        break;
    }
}
