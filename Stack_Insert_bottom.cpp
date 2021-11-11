#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int> &s, int data){
    // 
    if(s.empty()){
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtbottom(s,data);
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    insertAtbottom(s,5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;

}