#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        int a = (int)str.at(i);
        if (i == 0)
        {
            str.at(i) = char(a - 32);
        }
        else if (str.at(i) == ' ')
        {
            int b= (int)str.at(i+1);
            str.at(i + 1) = (char)(b-32);
        }
    }
    cout << str;
}