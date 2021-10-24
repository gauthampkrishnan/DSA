#include<iostream>
using namespace std;
int LargestSubarraysum(int arr[],int size){
   int largest_sum=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int subarray_sum=0;
            for(int k=i;k<=j;k++){
                
                subarray_sum+=arr[k];
                // cout<<"("<<arr[k]<<")";
            }
            largest_sum=max(largest_sum,subarray_sum);
        }
    }
    return largest_sum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int size=sizeof(arr)/sizeof(int);
    cout<<LargestSubarraysum(arr,size)<<endl;
    return 0;
}