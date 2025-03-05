#include <iostream>
using namespace std;

class Rectangle {
   public:
   double length;
   double width;

   double findArea() {
       return length*width;
   }
   double FindPerimeter() {
       return 2*(length+width);
   }
   void display(double area,double perimeter){
      cout<<"The area is = "<<area<<endl;
       cout<<"The perimeter is = "<<perimeter<<endl;
   }
};

int main() {
   Rectangle r1;
   Rectangle *ptr=&r1;
   cout<<"Enter Length:"<<endl;
   cin >> ptr->length; 
     cout<<"Enter Width:"<<endl;
   cin >> ptr->width; 
   double area=ptr->findArea();
   double perimeter=ptr->FindPerimeter();
   
   r1.display(area,perimeter);
   return 0;
}

