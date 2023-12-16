#include<iostream>
#include<string>
    using namespace std;
int main(){
    string str;
    cout<<"Enter string ";
    cin>>str;
    int l = str.length();
    for(int i=0;i<l;i++){
        int a= (int)str.at(i);
        if(a==122){
            str.at(i)='a';
        }
        else if(str.at(i)>='0'&&str.at(i)<='9'){
            str.at(i)=str.at(i);
        }
        else{
        str.at(i)=char(a+1);
        }
    }
    cout<<"New String "<<str;
    return 0;
}