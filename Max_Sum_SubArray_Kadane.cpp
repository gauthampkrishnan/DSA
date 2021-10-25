#include<iostream>
using namespace std;
int Kadane_algo(int arr[],int size){
    int cs=0;
    int largest_sum=0;
    for(int i=0;i<size;i++){
        cs = cs+arr[i];
        if(cs<0){
            cs=0;
        }
        largest_sum=max(largest_sum,cs);
    }
    return largest_sum;
}

int main(){

    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr)/sizeof(int);
    int value = Kadane_algo(arr,size);
    cout<<value;
    return 0;
}