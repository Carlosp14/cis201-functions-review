/*
File:                   Functions Review
Desc:                   Writing a function program in class to review
Author:                 Carlos A.Perez Ortiz
Email:                  carlosp7111@student.vvc.edu
Date of Creation:       10-16-18
*/
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
int a_count(string anything);

int main ()
{
    string input;
    cout << "Enter A String To Count A's: ";
    getline(cin, input);
    cout << "Your String Has " << a_count (input) << " A's in it !!!" << endl;
    return 0;
}


int a_count (string s)
{
    int count = 0;
    for (int i=0; i < s.size(); i++)
    {
        char character = tolower( s.at(i) );
        if (character == 'a')
        {
            count++;
        }
    }
    return count;
}
