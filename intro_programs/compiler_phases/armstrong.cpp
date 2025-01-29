#include<iostream>
#include <cmath>
using namespace std;

int findLength(int num){
   int l=0;
   while(num>0){
       
       num=num/10;
       l++;
   }
   return l;
}

int findArmstrong(int num){
    int len=findLength(num);
    
    int sum=0;
    int temp=num;
    while(num!=0){
       int n=num%10;
       sum+=pow(n,len);
       num=num/10;
    }
    
   int res=(sum==temp)?1:0;
   return res;
    
}

int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   int res=findArmstrong(n);
   if(res==1){
      cout<<"Armstrong Number"<<endl;
   }
   else{
       cout<<"Not Armstrong Number"<<endl;
   }
   return 0;
}

