#include<iostream>
#include<string>
    using namespace std;
int main(){
    string str;
    cout<<"Enter string ";
    cin>>str;
    int a=1;
    int l= str.size();
    for(int i=0,j=l-1;i<j;i++,j--){
        if(str.at(i)!=str.at(j)){
            a=0;
            break;
        }
    }
    if(a==0){
        cout<<"Not a Palindrome";
    }
    else{
        cout<<"Plaindrome";
    }
    return 0;
}