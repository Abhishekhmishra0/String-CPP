#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,temp;
    cout<<"Enter string: ";
    cin>>str;
    temp = " ";
    int j=0;
    int l= str.length();
    for(int i=0;i<l;i++){
        int a= (int)str.at(i);
        if(a>=97&&a<=122){
        temp = temp + str[i];
            
        }
    }
    str=temp;
    cout<<str;
    return 0;
}