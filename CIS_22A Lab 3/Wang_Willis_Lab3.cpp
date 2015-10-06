#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int num1, num2, result, youranswer, decision;
string cont, next;

void addition()
{
    srand(time(NULL));
    while(true)
    {
        num1 = rand()%101;
        num2 = rand()%101;
        cout << endl << num1 << " + " << num2 << endl << endl;
        result = num1 + num2;
        cin >> youranswer;
        cin.ignore();
        do
        {
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                        break;
                    }
                    else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }

                if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }

                if(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }
            }

            else if (youranswer != result && !(cin.fail()))
            {
                cout << endl << "Sorry. That's incorrect. The correct answer is: " << result << endl;
                cout << "Want to try again (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            cout << endl;
                            break;
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            break;
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                            cout << "Would you like to try a different problem (Y/N)?" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }
                }


            if (cin.fail())
            {
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl;
                cout << num1 << " x " << num2 << endl << endl;
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }

            if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No")
            {
                break;
            }

        } while (true);

        if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
        {
            break;
        }
    }
}


void multiplication()
{
    srand(time(NULL));
    while(true)
    {
        num1 = rand()%101;
        num2 = rand()%101;
        cout << endl << num1 << " x " << num2 << endl << endl;
        result = num1 * num2;
        cin >> youranswer;
        cin.ignore();
        do
        {
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                        break;
                    }
                    else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }

                if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }

                if(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }
            }

            else if (youranswer != result && !(cin.fail()))
            {
                cout << endl << "Sorry. That's incorrect. The correct answer is: " << result << endl;
                cout << "Want to try again (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            cout << endl;
                            break;
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            break;
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                            cout << "Would you like to try a different problem (Y/N)?" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }
                }


            if (cin.fail())
            {
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl;
                cout << num1 << " x " << num2 << endl << endl;
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }

            if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No")
            {
                break;
            }

        } while (true);

        if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
        {
            break;
        }
    }
}

void subtraction()
{
    srand(time(NULL));
    while(true)
    {
        num1 = rand()%101;
        num2 = rand()%101;
        if (num1 >= num2)
        {
            cout << endl << num1 << " - " << num2 << endl << endl;
            result = num1 - num2;
            cin >> youranswer;
            cin.ignore();
        }
        else if (num2 > num1)
        {
            cout << endl << num2 << " - " << num1 << endl << endl;
            result = num2 - num1;
            cin >> youranswer;
            cin.ignore();
        }

        do
        {
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                        break;
                    }
                    else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }

                if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }

                if(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }
            }

            else if (youranswer != result && !(cin.fail()))
            {
                cout << endl << "Sorry. That's incorrect. The correct answer is: " << result << endl;
                cout << "Want to try again (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            cout << endl;
                            break;
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            break;
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                            cout << "Would you like to try a different problem (Y/N)?" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }
                }


            if (cin.fail())
            {
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl;
                cout << num1 << " x " << num2 << endl << endl;
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }

            if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No")
            {
                break;
            }

        } while (true);

        if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
        {
            break;
        }
    }
}

void division()
{
    srand(time(NULL));
    while(true)
    {
        num1 = rand()%101;
        num2 = rand()%10 + 1;
        if (num1 >= num2)
        {
            cout << endl << num1 << " / " << num2 << " (Round to the nearest whole number)" << endl << endl;
            result = num1 / num2;
            cin >> youranswer;
            cin.ignore();
        }
        else if (num2 > num1)
        {
            cout << endl << num2 << " / " << num1 << " (Round to the nearest whole number)" << endl << endl;
            result = num2 / num1;
            cin >> youranswer;
            cin.ignore();
        }

        do
        {
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                        break;
                    }
                    else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }

                if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }

                if(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                {
                    break;
                }
            }

            else if (youranswer != result && !(cin.fail()))
            {
                cout << endl << "Sorry. That's incorrect. The correct answer is: " << result << endl;
                cout << "Want to try again (Y/N)?" << endl << endl;
                getline (cin, cont);

                while (true)
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            cout << endl;
                            break;
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            break;
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                            cout << "Would you like to try a different problem (Y/N)?" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }
                }


            if (cin.fail())
            {
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl;
                cout << num1 << " x " << num2 << endl << endl;
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }

            if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No")
            {
                break;
            }

        } while (true);

        if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
        {
            break;
        }
    }
}

int main()
{
    while (decision != 5)
    {
        decision = 0;
        cout << endl << "What type of math would you like to practice? (select a number)" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (x)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Quit Program" << endl << endl;
        cin >> decision;
        cin.ignore();
        switch (decision)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            break;
        default:
            cout << endl << "Sorry that is not a valid input" << endl << endl;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            break;
        }
        if (cin.fail())
        {
            cout << endl << "Sorry that is not a valid input" << endl << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return 0;
}

