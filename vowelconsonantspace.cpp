#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin,str);
    int countvow = 0;
    int countcon = 0;
    int countspace = 0;
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u')
        {
            countvow++;
        }

        else if (str.at(i) == ' ')
        {
            countspace++;
        }
        else
        {
            countcon++;
        }
    }
    cout << "Number of vowels: " << countvow << endl;
    cout << "Number of consonants: " << countcon << endl;
    cout << "Number of white spaces: " << countspace << endl;
    return 0;
}