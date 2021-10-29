#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(int a ,int b){
    return a>b;
}
int main(){
    int arr[]={10,9,8,7,5,3,2,5,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n,comparator);
    // reverse(arr,arr+n);
    //Print the output
    for(int x:arr){
        cout<<x;
    }
    return 0;
}