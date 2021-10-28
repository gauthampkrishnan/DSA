#include<iostream>
#include<conio.h>
using namespace std;
void Selection_Sort(int arr[],int size){
     for(int pos=0;pos<size;pos++){
         int current = arr[pos];
         int min_position=pos;
         for(int j=pos;j<size;j++){
          if(arr[j]<arr[min_position]){
            min_position=j;
          }   
         }
         swap(arr[min_position],arr[pos]);
     }
}
int main(){
    int arr[]={2,1,4,5,7,3};
    int size = sizeof(arr)/sizeof(int);
    Selection_Sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];

    }
    return 0;
}