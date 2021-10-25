#include<iostream>
using namespace std;
int Max_sum(int arr[],int size){

    // Prefix Sum
    int largest_Sum =0;
    int prefix_array[100]={0};
    prefix_array[0]=arr[0];
    for(int i=1;i<size;i++){
        prefix_array[i]=prefix_array[i-1]+arr[i];
    }
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
        int array_sum = i>0?prefix_array[j]-prefix_array[i-1]:prefix_array[j];
        largest_Sum=max(largest_Sum,array_sum);
        }
        
    }
    return largest_Sum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr)/sizeof(int);
    int sum_value=Max_sum(arr,size);
    cout<<sum_value;
    return 0;
}