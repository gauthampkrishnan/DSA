#include<iostream>
using namespace std;
void Insertion_Sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int current=arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]= arr[prev];
            prev=prev-1; 
        }
        arr[prev+1]=current;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={-1,-2,0,-100,12,2,3,4,5,2,3};
    int size=sizeof(arr)/sizeof(int);
    Insertion_Sort( arr,size);
   
    return 0;
}