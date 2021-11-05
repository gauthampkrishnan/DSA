#include<iostream>
#include<cstring>
using namespace std;

class Product{
private:
    int id;
    string name;
    int mrp;
    int selling_price;
public:
    //Constructor
    Product(){
        cout<<"Inside Constructor"<<endl;
    }
    //Parameterised Constructor , Constructor overloading
    Product(int id, string n,int mrp,int selling_price){
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        this->name=n;

    }
    Product(Product &X){
        //Create the copy code;
        id=X.id;
        name=X.name;
        mrp=X.mrp;
        selling_price=X.selling_price;
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
void ShowDetails(){
    cout<<"Name"<<name<<endl;
    cout<<"Id"<<id<<endl;
    cout<<"Selling Price"<<selling_price<<endl;
    cout<<"MRP"<<mrp<<endl;
    cout<<"-----------------"<<endl;
}

};

int main(){
    Product Camera(101,"Gopro",2800,2600);
    Product webcam(Camera);
    Product handycam=Camera;
    handycam.ShowDetails();
    Camera.ShowDetails();
    webcam.ShowDetails();
    Camera.setmrp(100);
    Camera.setsp(200);
    cout<<"Size of object "<<sizeof(Camera)<<endl;
    cout<<"MRP "<<Camera.getMrp()<<endl;
    cout<<"SP "<<Camera.getSellingPrice()<<endl;

    return 0;
}