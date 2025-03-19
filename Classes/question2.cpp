#include <iostream>
#include <math.h>
using namespace std;

class MyPoint{
   private:
       double x;
       double y;
   public:
       MyPoint(){
           this->x = 0.0;
           this->y = 0.0;
       };
       
       MyPoint(double x, double y){
           this->x = x;
           this->y = y;
       }
       double getX(){
          return this->x;
       }
       double getY(){
           return this->y;
       }
       double distance(MyPoint p2){
            return sqrt(pow((this->x-p2.x),2)+pow((this->y-p2.y),2));
          
       }
 
};

int main(){
     MyPoint p1(2.3,4.5);
     MyPoint p2(2.2,5.3);
     cout << "The distance between both the points is: " << p1.distance(p2)<< endl;
     return 0;
        
}

