#include <iostream>
using namespace std;

void exampleFunction(){
 
 
       class LocalClass{
              public:
                    void greet(string name){
                         cout<<name<<" Wrote this code. Douchebag"<<endl;
                    }
         
       };
       // create object and use it
       LocalClass obj;
       string name="Biswajeet";
       obj.greet(name);
       
}
int main(){
       exampleFunction();
       return 0;
 
}
// they cannot access static variables or constants from enclosing function (but not non static llocals directly)
// they cannot use static templates
