#include<iostream>
using namespace std;

class Complex{

private:
    int real,imag;
    
public:
    Complex(int r=0,int i=0) : real(r) ,imag(i) {}
    
    friend Complex operator+(const Complex &c1,const Complex &c2);
    
    void display(){
     
       cout<<real<<" + "<<imag<<"i"<<endl;
     
    }
};
Complex operator+(const Complex &c1,const Complex &c2){
   return Complex(c1.real+c2.real,c1.imag+c2.imag);
}

int main(){
   Complex c1(2,1);
   Complex c2(3,4);
   Complex c3=c1+c2;
   c3.display();
 

}
