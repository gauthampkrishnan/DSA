#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Demo vector
    vector<int> arr={2,3,4,5,3};
    //Fill constructor
    vector<int> arr1(10,7);
    vector<int> arr2(100,0);
    //Push back
    arr.pop_back();
    arr.push_back(16);
    //Print all the elements of the vector
    for(int i=0;i<arr.size();i++){
        cout<<arr1[i]<<endl;
    }
    //Size tells us about number of elements
    cout<<"Total number of elements "<<arr.size()<<endl;
    //Capacity of the vector
    cout<<"Capacity of the Array "<<arr.capacity()<<endl;

    return 0;
}