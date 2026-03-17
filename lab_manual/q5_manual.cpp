// A student wants to swap the values of two variables for practising coding basics.
// Implement a solution to swap two numbers using different techniques.
#include<iostream>
using namespace std;

int main(){
int a,b,temp,choice;
cout<<" enter a and b :";
cin>>a>>b;
cout<<"select which way you want :";
cout<<"\n1. third variable \n2. addition subtraction \n3. multi division\n4. bitwise";

cin>>choice;
switch(choice){
    case 1 : temp=a;
             a=b;
             b=temp;
             cout<<"a is : "<<a<<" b is : "<<b;
             break;
    case 2 : a=a-b;
             b=a+b;
             a=b-a;
             cout<<"a is : "<<a<<" b is : "<<b;
             break;
    case 3 : a=a*b;
             b=a/b;
             a=a/b;
             cout<<"a is : "<<a<<" b is : "<<b;
             break;
    case 4 :  a = a ^ b;
              b = a ^ b;
              a = a ^ b; 
             cout<<"a is : "<<a<<" b is : "<<b;
             break;        
    default : cout<<"invalid";        
}
return 0;
}