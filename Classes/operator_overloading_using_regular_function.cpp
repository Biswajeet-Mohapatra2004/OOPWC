#include<iostream>
using namespace std;

class Complex{

private:
    int real,imag;
    
public:
    Complex(int r=0,int i=0) : real(r) ,imag(i) {}
    
    int getReal() const {return real;}
    int getImag() const {return imag;}
    
    void display(){
     
       cout<<real<<" + "<<imag<<"i"<<endl;
     
    }
};
Complex operator+(const Complex& lhs, const Complex& rhs){
    return Complex(lhs.getReal()+rhs.getReal(),lhs.getImag()+rhs.getImag());
}

int main(){
   Complex c1(2,1);
   Complex c2(3,4);
   Complex c3=c1+c2;
   c3.display();
 

}
