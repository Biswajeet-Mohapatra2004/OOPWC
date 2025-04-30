/*
3.1 Define a class String that could work as an user-defined string type. Include constructors that
will enable us to create uninitialized string
String s1; // string with length 0
and also to initialize an object with a string constant at the time of creation like
String s2(”Well done!”);
Include a function that adds two strings to make a third string. Note that the statement
s2 = s1;
will be perfectly reasonable expression to copy one string to another. Write a complete program
to test your class to see that it does the following tasks:
(a) Creates uninitialized string objects.
(b) Creates objects with string constants.
(c) Concatenates two strings properly.
(d) Displays a desired string object.

*/
#include<iostream>
using namespace std;
class String{
    private:
       string s;
    public:
        String(){
            s="";
        }
        String(string str){
            s=str;
        }
        String(const String &s2){
            s=s2.s;
        }
        friend string concatenate(String s1,String s2);
        void display();
};
void String::display(){
    cout<<s<<endl;
}
string concatenate(String s1,String s2){
    return s1.s+s2.s;
}
int main(){
    String s1("hello world");
    s1.display();
    String s2;
    s2=s1;
    s2.display();
    string res=concatenate(s1,s2);
    cout<<"The concatenated string is: "<<res<<endl;
    return 0;
    
}