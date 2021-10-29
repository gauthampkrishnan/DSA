#include<iostream>
#include<string>
using namespace std;


int main(){
    // char s[100] = {'1','a','b','c','\0'};
    // string s="Hello world";//Dynamic array
    // string s("Hello world");
    string s;
    getline(cin,s,'.');
    for(char ch:s){
        cout<<s<<",";
    }
    cout<<s<<endl;

    return 0;
}