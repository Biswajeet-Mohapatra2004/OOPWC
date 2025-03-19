#include <iostream>

using namespace std;

class Rectangle{
   private:
       double width;
       double height;
   public:
       Rectangle(){
           width = 1.0;
           height = 1.0;
       };
       
       Rectangle(double width, double height){
           this->width = width;
           this->height = height;
       }
       double getArea(){
          return width * height;
       }
       double getPerimeter(){
           return 2*(width+height);
       }
 
};

int main(){
     double height, width;
     cout << "Enter the height of the rectangle: " <<endl;
     cin >> height;
     cout << "Enter the width of the rectangle: " <<endl;
     cin >> width;
             
     Rectangle rect1(width, height);
     cout << "The perimeter of the rectangle is: " << rect1.getPerimeter() << endl;
     cout << "The area of the rectangle is: " << rect1.getArea() << endl;
     return 0;
        
}

