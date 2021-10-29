#include<iostream>
using namespace std;

int main(){
    char numbers[][10]={
        "one",
        "two",
        "four",
    };
    int i=3;
    cout<<numbers[i][1];
    for(int i=0;i<3;i++){
        cout<<numbers[i];
    }
    return 0;
}