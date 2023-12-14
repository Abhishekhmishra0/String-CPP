#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    string str2;
    cout<<"Enter string one ";
    cin>>str1;
    cout<<"Enter string two: ";
    cin>>str2;
    cout<<"string one + string two is : ";
    cout<<str1+str2;
    str1+=str2;
    cout<<endl;
    cout<<"New string one is ";
    cout<<str1;
    return 0;
}