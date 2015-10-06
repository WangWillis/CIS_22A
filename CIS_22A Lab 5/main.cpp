#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

double calcAverage(double score1, double score2, double score3)
{
    return (score1 + score2 + score3)/3;
}

int findHighest(int s1, int s2, int s3)
{
    if(s1 >= s2 && s1 >= s3)
    {
        return s1;
    }
    else if(s2 > s1 && s2 >= s3)
    {
        return s2;
    }
    else
    {
        return s3;
    }
}

int findLowest(int num1, int num2, int num3)
{
    if(num1 <= num2 && num1 <= num3)
    {
        return num1;
    }
    else if(num2 < num1 && num2 < num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    string name;
    int val1, val2, val3;
    ifstream start;
    ofstream write;
    start.open("lab5.txt");
    write.open("Lab5Organized.txt");
    if(!(start))
    {
        cout << "Sorry cannot open the file lab5.txt :(" << endl;
        cout << "Now exiting." << endl;
        return 0;
    }
    cout << "Starting to write to Lab5Organized." << endl << endl;
    //since setw does not work in files, I just used spaces
    write << "Name     " << "Average    " << "Highest Score     " << "Lowest Score" << endl;

    while(start >> name)
    {
        write << name;
        for(int i = name.size(); i < 9; i++)
        {
            write << " ";
        }
        start >> val1 >> val2 >>val3;
        write << setprecision(2) << calcAverage(val1, val2, val3) << "         ";
        if(findHighest(val1, val2, val3) == 100)
        {
            write << findHighest(val1, val2, val3) << "               ";
        }
        else
        {
            write << findHighest(val1, val2, val3) << "                ";
        }
        write << findLowest(val1, val2, val3) << endl;
    }
    start.close();
    write.close();
    cout << "Finished." << endl << "The scores for your students are now organized in the file Lab5Organized!" << endl;
    return 0;
}
