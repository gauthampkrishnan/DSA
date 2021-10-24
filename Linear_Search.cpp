#include<iostream>
using namespace std;

int Linear_Search(int arr[],int n, int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}

int main(){
int key;
int arr[]={10,15,12,9,4,3,21,1};
int n = sizeof(arr)/sizeof(int);
cin>>key;
int index = Linear_Search(arr,n,key);
if (index==-1){
    cout<<"Not Present";
}
else{
    cout<<"Found at index "<<index+1;
}
return 0;
}