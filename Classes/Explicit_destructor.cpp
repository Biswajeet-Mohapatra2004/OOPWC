#include <iostream>
using namespace std;

class Demo{
   public:
      Demo(){
            cout<<"Constructor called. object created!!";
      }
      ~Demo(){
          cout<<" Destructor called. Object destroyed!!";
      }

};
int main(){
     Demo obj;
     obj.~Demo();
     cout<<"Exiting main function";
       return 0;
 
}
