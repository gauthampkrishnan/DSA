#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]={'a','b','c'};//wrong
    char b[]={'a','b','c','\0'};//right
    char c[]="ajskjdjnm";//right
    char h[100];
    cin>>h;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<strlen(a)<<endl;
    cout<<sizeof(a);// +1 because of null character
    return 0;
}