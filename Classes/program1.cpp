#include <iostream>
using namespace std;

class Student {
   public:
   string name;
   int marks;

   void display() {
       cout << "Name: " << name << endl;
       cout << "Marks: " << marks << endl; 
   }
};

int main() {
   Student s1;
   cout<<"Enter Name:"<<endl;
   cin >> s1.name; 
     cout<<"Enter Marks:"<<endl;
   cin >> s1.marks; 
   s1.display();
   return 0;
}

