#include<iostream>
#include<string>
using namespace std;
//Linear computation
string compress(string str){
    int n= str.length();
    string output;
    for(int i=0;i<n;i++){
        
        int count=1;
        while(i<n-1 and str[i+1]==str[i]){
            count++;
            i++;
        }
        output +=str[i];
        output +=to_string(count);
        
    }
    if(output.length()>str.length()){
        return str;
    }
    return output;
}
int main(){
    string s1="aaaabbbccddeeee";
    cout<<compress(s1)<<endl;
    string s2="fsaabbbccddeeee";
    cout<<compress(s2)<<endl;

    return 0;
}