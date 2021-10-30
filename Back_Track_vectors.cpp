#include<iostream>
#include<vector>
using namespace std;
void printarray(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void fillArray(vector<int>&arr,int i,int n,int val){
    if (i==n){
        printarray(arr,n);
        return;
    }
    arr[i]=val;
    fillArray(arr,i+1,n,val+1);
    arr[i]=-1*arr[i]; //Back tracking

}

int main(){
vector<int> arr(100,0);
int n;
// int arr[100]={0};
cin>>n;
fillArray(arr,0,n,1);
printarray(arr,n);

}