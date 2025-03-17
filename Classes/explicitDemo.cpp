#include<iostream>
using namespace std;

class Cube{
    double side;
public:
   explicit Cube(double side);
   double volume();
   bool compareVolume(Cube aCube);
   
};
Cube::Cube(double length):
    side(length){}
double Cube::volume(){
    return side*side*side;
}
bool Cube::compareVolume(Cube aCube){

   return volume() >aCube.volume();
}

int main(){
  
   Cube box1(5.0);
   Cube box2(3.0);
   
   // the compiler never used a constructor declared as explicit for an implicit conversion. it can only be used explicitily 
   // in the program code to create an object. 
   
   // if we dont mention the keyword explicit in the constructor header then, implicit conversions can be made during compilation.
   // for exam if we provide a double value inside the compareVolume instead of Cube object it is automatically going to create an object by calling the constructor Cube(value) and passing this object as the function parameter. to avoid this we use the explicit keyword.
   
   /*
   
   if(box1.compareVolume(50)){  implicit conversion
      cout<<"Volume of box1 is greater"<<endl;
   }
   else{
      cout<<"Volume of box2 is greater"<<endl;
   }
   
   */
   
   if(box1.compareVolume(box2)){
      cout<<"Volume of box1 is greater"<<endl;
   }
   else{
      cout<<"Volume of box2 is greater"<<endl;
   }
   
   return 0;

}
