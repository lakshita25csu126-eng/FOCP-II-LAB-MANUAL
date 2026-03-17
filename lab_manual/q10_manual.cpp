// A calendar app calculates whether February has 29 days. 
// Implement a solution to check if a year is a
// leap year or not.

#include<iostream>
using namespace std;

int main(){
int y;
cout<<"enter year  :";
cin>>y;

if(( y%400==0 )|| (y%4==0 && y%100!=0))
cout<<"it is leap year";
else
cout<<"it is not leap year ";

return 0;
}