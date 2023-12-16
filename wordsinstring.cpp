#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    cout << "Enter string one: ";
    getline(cin, s1);
    int l = s1.length();
    int count = 1;
    for (int i = 0; i < l; i++)
    {
        if (s1.at(i) == ' ')
        {
            count++;
        }
    }
    cout << "Number of words in the string is " << count;
}