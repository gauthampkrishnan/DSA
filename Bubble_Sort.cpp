#include<iostream>
using namespace std;
void Bubble_sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={2,1,4,5,6,4,3};
    int size=sizeof(arr)/sizeof(int);
    Bubble_sort(arr,size);
    return 0;
}