#include <iostream>
using namespace std;

class Car {
   public:
   string make,model;
   int year;

   void display(){
      cout<<"Maker = "<<make<<endl;
       cout<<"Model = "<<model<<endl;
       cout<<"Year = "<<year<<endl;
   }
};

int main() {
   Car c1;
   Car *car=&c1;
   cout<<"Enter Maker: "<<endl;
   cin >> car->make; 
   cout<<"Enter Model: "<<endl;
   cin >> car->model; 
   cout<<"Enter Year: :"<<endl;
   cin >> car->year; 
   
   car->display();
   return 0;
}

