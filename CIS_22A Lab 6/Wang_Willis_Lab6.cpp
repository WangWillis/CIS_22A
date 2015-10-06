/*************************
  This program gives statistical data from an input file
  CIS 22A - Lab 6
  Author: Willis Wang
  Date: 12/5/2014
************************/
#include <iostream>
#include <fstream>

using namespace std;

int elements();

int elements();
double getmedian(int c[], int d), calcaverage(int a[], double b);
void highestvalue(int grades[], int b), lowestvalue(int grades[]), getmode(int E[], int f);

//number of elements inputed
int elements()
{
    ifstream op;
    int x, t = 0;
    op.open("lab6.txt");
    while(op >> x)
    {
        t++;
    }
    op.close();
    return t;
}

//calculates the average of the program
double calcaverage(int a[], double b)
{
    int total = 0;
    for(int q = 0; q < b; q++)
    {
        total += a[q];
    }
    return total/b;
}

//gives highest value
void highestvalue(int grades[], int b)
{
    //list is already sorted so highest score is last number
    cout << "The highest score is: " << grades[b - 1] << endl;
}

//gives the lowest score
void lowestvalue(int grades[])
{
    //list is already sorted so lowest score is first number
    cout << "The lowest score is: " << grades[0] << endl;
}

//gives a median
double getmedian(int c[], int d)
{
    //if there is an even number of elements, the median is the average of the middle two numbers
    if(d%2 == 0)
    {
        return ((double)c[(d/2)-1] + c[d/2])/2;
    }
    //if odd then it is the middle number
    else
    {
        return c[d/2];
    }
}

//gives the most repeated number
void getmode(int E[], int f)
{
    //ele is the number of elements in the array
    const int ele = E[f - 1] + 1;
    //rep is the frequency of numbers
    int n = 0, rep[ele];
    //initializes rep to 0
    for(int h = 0; h < ele; h ++)
    {
        rep[h] = 0;
    }
    //counts rep
    for(int k = 0; k < f; k++)
    {
        rep[E[k]]++;
    }
    //gets the highest frequency
    for(int j = 0; j < ele; j++)
    {
       if(rep[j] > n)
       {
           n = rep[j];
       }
    }

    cout << "The mode(s) is/are: ";
    //outputs the mode/modes
    for(int i = 0; i < ele; i++)
    {
        if(rep[i] == n)
        {
            cout << i << ' ';
        }
    }
    cout << endl;
}

int main()
{
    const int spaces = elements();
    int decision;
    int grades[spaces];
    ifstream score;
    score.open("lab6.txt");
    //used if there is no lab6 file
    if(score.fail())
    {
        cout << "Sorry cannot find lab6.txt :(" << endl << "Exiting now." << endl;
        return 0;
    }
    //inputs score into the array
    for(int i = 0; i < spaces; i++)
    {
        score >> grades[i];
    }
    //sorts the array
    for(int k = 0; k < spaces; k++)
    {
        for(int j = k + 1; j < spaces; j++)
        {
            if(grades[k] > grades [j])
            {
                int temp;
                temp = grades[k];
                grades[k] = grades[j];
                grades[j] = temp;
            }
        }
    }
    score.close();
    //selection list/selection
    do
    {
        cout << "What information do you want from the list?" << endl;
        cout << "01. Average Score" << endl;
        cout << "02. Highest Score" << endl;
        cout << "03. Lowest Score" << endl;
        cout << "04. Median" << endl;
        cout << "05. Mode" << endl;
        cout << "06. Quit" << endl;
        cin >> decision;
        switch(decision)
        {
        case 1:
            cout << "The average score is: " << calcaverage(grades, spaces) << endl;
            break;
        case 2:
            highestvalue(grades, spaces);
            break;
        case 3:
            lowestvalue(grades);
            break;
        case 4:
            cout << "The median is: " << getmedian(grades, spaces) << endl;
            break;
        case 5:
            getmode(grades, spaces);
            break;
        case 6:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Sorry that is not a recognized input." << endl << "Please try again." << endl;
            break;
        }
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
        }
    }while(decision != 6);
    return 0;
}
