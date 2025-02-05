#include<iostream>
#include<iomanip> // required for using setw
using namespace std;
int main(){
   // symbolic contants: here inside the enum the compiler itself initialises the integer values in a increasing order.
   enum{x,y,z};
   cout<<x<<" "<<y<<" "<<z<<endl;
   int a=5;
   // reference variable works as a alias name to the variable. any operation done on reference variable will be reflected in the original variable.
   int &r=a;
   cout<<"a= "<<a<<" r = "<<r<<endl;
   r++;
   cout<<"a= "<<a<<" r = "<<r<<endl;
   
   // operaters in c++ (^= bit wise xor)
   // swapping two numbers using bit wise xor
   int c=4,d=5;
   c^=d;
   cout<<"c = "<<c<<" d = "<<d<<endl;
   d=c^d;
   cout<<"c = "<<c<<" d = "<<d<<endl;
   c^=d;
   cout<<"c = "<<c<<" d = "<<d<<endl;
   
   // :: scope resolution operator
   // ::* member to pointer operator
   // ->* .* pointer to member operator
   //new : memory allocation operator
   //delete : memory release operator
   //setw: fieldwidth operator- can be used for left and right justifying
   
   
   int e =20,f=6;
   cout<<(double)e/f<<endl; // in c casting
   cout<<double(e)/f<<endl; // in c++ casting
   
   
   return 0;
}
