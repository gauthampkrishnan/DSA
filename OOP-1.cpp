#include<iostream>
using namespace std;

class Product{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
//Setters

void setmrp(int price){
    if(price>0){
        mrp=price;
    }
    
}
void setsp(int price){
    if(price>mrp){
        selling_price=mrp;
    }
    else{
        selling_price=price;
    }
   
}

//Getters
int getMrp(){
    return mrp;
}
int getSellingPrice(){
    return selling_price;
}
    

};

int main(){
    Product Camera;
    Camera.setmrp(100);
    Camera.setsp(200);
    cout<<"Size of object "<<sizeof(Camera)<<endl;
    cout<<"MRP "<<Camera.getMrp()<<endl;
    cout<<"SP "<<Camera.getSellingPrice()<<endl;

    return 0;
}