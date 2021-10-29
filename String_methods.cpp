#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[1000] = "apple";
    char b[1000];

    cout<<strlen(a)<<endl;

    //Strcpy
    strcpy(b,a);//dest and source
    cout<<b<<endl;

    //strcmp
    cout<<strcmp(a,b)<<endl;

    //strcat
    char web[]="www ";
    char domain[]="google";
    cout<<strcat(web,domain)<<endl;

    strcpy(b,strcat(web,domain));
    cout<<"Welcome"<<b;

    cout<<strcmp(a,b)<<endl;

}