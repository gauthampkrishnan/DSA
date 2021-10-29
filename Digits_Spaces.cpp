#include<iostream>
using namespace std;
//Given a sentence count the number of alphabets digits and spaces

int main(){
    // store and then count
    char ch;
    ch=cin.get();
    int alpha=0;
    int space=0;
    int digit = 0;

    while(ch!='\n'){
    if(ch>='0' and ch<='9'){
        digit++;
    }      
    else if((ch>='a' and ch<='z')or(ch>='A' and ch<='Z')){
        alpha++;
    }
    else if(ch==' '){
        space++;
    }
        ch=cin.get();

    }
    cout<<"Total chara"<<alpha<<endl;
    cout<<"Total digits"<<digit<<endl;
    cout<<"Total spaces"<<space<<endl;


    return 0;
}