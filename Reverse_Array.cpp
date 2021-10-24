#include<iostream>
using namespace std;

void Reverse_Array(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }

}
int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int size=sizeof(arr)/sizeof(int);
Reverse_Array(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
return 0;
}