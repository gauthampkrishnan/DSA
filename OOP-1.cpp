#include<iostream>
#include<cstring>
using namespace std;

class Product{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    //Constructor
    Product(){
        cout<<"Inside Constructor"<<endl;
    }
    //Parameterised Constructor , Constructor overloading
    Product(int id, char *n,int mrp,int selling_price){
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        strcpy(name,n);

    }

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