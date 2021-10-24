#include<iostream>
using namespace std;
int Binary_Search(int arr[], int n, int key){
int start=0;
int end = n-1;

while(start<=end){
    int mid= (start+end)/2;
    if (key==arr[mid]){
        return mid;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
return -1;
}

int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int key;
int size=sizeof(arr)/sizeof(int);
cin>>key;
int index = Binary_Search(arr,size,key);
if(index!=-1){
    cout<<"Found at index "<<index+1;
}
else{
    cout<<"Not found!";
}
return 0;
}