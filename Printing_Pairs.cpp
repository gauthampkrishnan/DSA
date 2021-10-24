#include<iostream>
using namespace std;
void Print_Pairs(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
        cout<<endl;
    }
    
}


int main(){
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(int);
    Print_Pairs(arr,size);
    return 0;
}