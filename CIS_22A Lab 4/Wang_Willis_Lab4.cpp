/*************************
  This program helps users practice math by outputting problems on the screen asking the user to answer them.
  CIS 22A - Lab 3
  Author: Willis Wang
  Date: 10/24/14
************************/

//A better flowchart can be found at https://www.gliffy.com/go/html5/6352541

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//num1 and num2 are the outputted random numbers
//result is the actual answer to the problem while youranswer is your inputed answer
//decision is inputed and selects the kind of math you want to practice
//cont asks the user if they want to continue with another math problem
//Prototypes for functions
int num1, num2, result, youranswer, decision;
string cont;
void addition(), multiplication(), subtraction(), division(), score();
int menu();

//This is the function for addition
void addition()
{
    //srand is a seed for rand() which makes rand() more random
    srand(time(NULL));
    //This loop continues to output new problems until it is broken
    do
    {
        //This block outputs new problems
        num1 = rand()%101;
        num2 = rand()%101;
        cout << endl << num1 << " + " << num2 << endl << endl;
        result = num1 + num2;
        cin >> youranswer;
        cin.ignore();

        //This loop is used when the user wants to retry a problem they got incorrect it will go into this loop at least once
        do
        {
            //This is used when the answer is correct
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This is used to determine whether the user wants to continue or not used done at least once so less breaks in the code
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                    }

                    if(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                    {
                        cout << endl << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));

            }

            //This is used when your answer is incorrect
            else if (youranswer != result && !(cin.fail()))
            {
                cin.clear();
                cout << endl << "Sorry that is incorrect. Want to try the problem again (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This determines if the user wants to retry the problem or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            cont.clear();
                            cout << endl << num1 << " + " << num2 << endl << endl;
                            cin >> youranswer;
                            cin.ignore();
                            break;
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            cout << endl << "The correct answer is: " << result << endl;
                            cout << endl << "Do you want to try another problem (Y/N)" << endl << endl;
                            getline (cin, cont);
                            do
                            {
                                if (!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                                {
                                    cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                                    cout << "Would you like to try the problem again (Y/N)?" << endl << endl;
                                    cin.clear();
                                    getline(cin, cont);
                                }
                            }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter (Y/N)" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                }

            //This is used if the user answers with something that is not an int
            if (cin.fail())
            {
                cont.clear();
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl << endl;
                cout << num1 << " + " << num2 << endl << endl;
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }
        }while(!(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes"));
    }while(!(cont == "n" || cont == "N" || cont == "no" || cont =="No"));
}

//This function uses the same logic as the addition function
void multiplication()
{
    srand(time(NULL));
    do
    {
        num1 = rand()%101;
        num2 = rand()%101;
        cout << endl << num1 << " x " << num2 << endl << endl;
        result = num1 * num2;
        cin >> youranswer;
        cin.ignore();
        do
        {
            //This is used when the answer is correct
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This is used to determine whether the user wants to continue or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                    }

                    if(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                    {
                        cout << endl << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));

            }

            //This is used when your answer is incorrect
            else if (youranswer != result && !(cin.fail()))
            {
                cin.clear();
                cout << endl << "Sorry that is incorrect. Want to try the problem again (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This determines if the user wants to retry the problem or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            cont.clear();
                            cout << endl << num1 << " x " << num2 << endl << endl;
                            cin >> youranswer;
                            cin.ignore();
                            break;
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            cout << endl << "The correct answer is: " << result << endl;
                            cout << endl << "Do you want to try another problem (Y/N)" << endl << endl;
                            getline (cin, cont);
                            do
                            {
                                if (!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                                {
                                    cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                                    cout << "Would you like to try the problem again (Y/N)?" << endl << endl;
                                    cin.clear();
                                    getline(cin, cont);
                                }
                            }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter (Y/N)" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                }

            //This is used if the user answers with something that is not an int
            if (cin.fail())
            {
                cont.clear();
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl << endl;
                cout << num1 << " x " << num2 << endl << endl;
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }
        }while(!(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes"));

    }while (!(cont == "n" || cont == "N" || cont == "no" || cont =="No"));
}


void subtraction()
{
    //inputs a new seed for rand()
    srand(time(NULL));

    //Loop to keep generating problems for the user
    do
    {
        num1 = rand()%101;
        num2 = rand()%101;

        //do not want to have negative answers this is why this if statement is here
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

        //The rest of the logic is the same as the other 2 functions
        do
        {
            if (youranswer == result)
            {
                cout << endl << "Good Job!" << endl << endl;
                cout << "Do you want to continue (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This is used to determine whether the user wants to continue or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                    }

                    if(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                    {
                        cout << endl << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));

            }

            else if (youranswer != result && !(cin.fail()))
            {
                cin.clear();
                cout << endl << "Sorry that is incorrect. Want to try the problem again (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This determines if the user wants to retry the problem or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            if (num1 >= num2)
                            {
                                cont.clear();
                                cout << endl << num1 << " - " << num2 << endl << endl;
                                cin >> youranswer;
                                cin.ignore();
                                break;
                            }
                            else if (num2 > num1)
                            {
                                cont.clear();
                                cout << endl << num2 << " - " << num1 << endl << endl;
                                cin >> youranswer;
                                cin.ignore();
                                break;
                            }
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            cout << endl << "The correct answer is: " << result << endl;
                            cout << endl << "Do you want to try another problem (Y/N)" << endl << endl;
                            getline (cin, cont);
                            do
                            {
                                if (!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                                {
                                    cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                                    cout << "Would you like to try the problem again (Y/N)?" << endl << endl;
                                    cin.clear();
                                    getline(cin, cont);
                                }
                            }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter (Y/N)" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                }

            //This is used if the user answers with something that is not an int
            if (cin.fail())
            {
                cont.clear();
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl << endl;
                if(num1 >= num2)
                {
                    cout << num1 << " - " << num2 << endl << endl;
                }
                if(num1 < num2)
                {
                    cout << num2 << " - " << num1 << endl << endl;
                }
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }
        }while(!(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes"));

    }while (!(cont == "n" || cont == "N" || cont == "no" || cont =="No"));
}

//Same exact logic as the subtraction function
void division()
{
    srand(time(NULL));
    do
    {
        num1 = rand()%100 + 1;
        num2 = rand()%10 + 1;
        if (num1 >= num2)
        {
            cout << endl << num1 << " / " << num2 << " (Round down to a whole number)" << endl << endl;
            result = num1 / num2;
            cin >> youranswer;
            cin.ignore();
        }
        else if (num2 > num1)
        {
            cout << endl << num2 << " / " << num1 << " (Round down to a whole number)" << endl << endl;
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

                //This is used to determine whether the user wants to continue or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                    {
                        cout << endl;
                    }

                    if(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                    {
                        cout << endl << "Sorry I do not recognize that input. Please re-enter." << endl;
                        cout << "Would you like to continue (Y/N)?" << endl << endl;
                        cin.clear();
                        getline(cin, cont);
                    }
                }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));

            }

            else if (youranswer != result && !(cin.fail()))
            {
                cin.clear();
                cout << endl << "Sorry that is incorrect. Want to try the problem again (Y/N)?" << endl << endl;
                getline (cin, cont);

                //This determines if the user wants to retry the problem or not
                do
                {
                    if (cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes")
                        {
                            if (num1 >= num2)
                            {
                                cont.clear();
                                cout << endl << num1 << " / " << num2 << endl << endl;
                                cin >> youranswer;
                                cin.ignore();
                                break;
                            }
                            else if (num2 > num1)
                            {
                                cont.clear();
                                cout << endl << num2 << " / " << num1 << endl << endl;
                                cin >> youranswer;
                                cin.ignore();
                                break;
                            }
                        }
                        else if (cont == "n" || cont == "N" || cont == "no" || cont =="No")
                        {
                            cout << endl << "The correct answer is: " << result << endl;
                            cout << endl << "Do you want to try another problem (Y/N)" << endl << endl;
                            getline (cin, cont);
                            do
                            {
                                if (!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"))
                                {
                                    cout << endl << "Sorry I do not recognize that input. Please re-enter" << endl;
                                    cout << "Would you like to try the problem again (Y/N)?" << endl << endl;
                                    cin.clear();
                                    getline(cin, cont);
                                }
                            }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                        }
                        else
                        {
                            cout << endl << "Sorry I do not recognize that input. Please re-enter (Y/N)" << endl << endl;
                            cin.clear();
                            getline(cin, cont);
                        }
                    }while(!(cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes" || cont == "n" || cont == "N" || cont == "no" || cont =="No"));
                }

            //This is used if the user answers with something that is not an int
            if (cin.fail())
            {
                cont.clear();
                cout << endl << "I'm sorry that is not a valid input." << endl;
                cout << "Please re-enter your solution to the equation: " << endl << endl;
                if(num1 >= num2)
                {
                    cout << num1 << " / " << num2 << endl << endl;
                }
                if(num1 < num2)
                {
                    cout << num2 << " / " << num1 << endl << endl;
                }
                cin.clear();
                cin.ignore();
                cin >> youranswer;
                cin.ignore();
            }
        }while(!(cont == "n" || cont == "N" || cont == "no" || cont =="No" || cont == "y" || cont == "Y" || cont == "yes" || cont == "Yes"));

    }while (!(cont == "n" || cont == "N" || cont == "no" || cont =="No"));
}

//menu function
int menu()
{
        cout << endl << "What type of math would you like to practice? (select a number)" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (x)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Quit Program" << endl << endl;
        cin >> decision;
        cin.ignore();
        //decision is the parameter for the switch in main
        return decision;
}

//main function
int main()
{
    //Keeps the program going until the user wants to exit
    do
    {
        //Selection menu and decides what function to execute based on the user's input
        switch (menu())
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
        //Used to exit the program
        case 5:
            break;
        //Used if the user enters an invalid decision
        default:
            cout << endl << "Sorry that is not a valid input" << endl << endl;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            break;
        }

    }while (decision != 5);
    return 0;
}

