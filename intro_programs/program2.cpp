#include<iostream>
using namespace std;
void printBio(){
    cout<<"Name: Biswajeet"<<endl;
     cout<<"Age: 20/10/2004"<<endl;
      cout<<"Sex: Male"<<endl;
       cout<<"10th percentile: 75.4"<<endl;
        cout<<"12th percentile: 76"<<endl;
}
int main(){

   for(int i=1;i<6;i++){
      cout<<i;
      for(int j=1;j<i;j++){
         cout<<+j;
      }
      cout<<i<<endl;
   
   }
   printBio();
   return 0;

}
