//A weather app developer needs to provide both Celsius and Fahrenheit readings. 
//Implement a solution to convert Fahrenheit temperature into Centigrade or vice versa.

#include<iostream>
using namespace std;

int main(){
float celsius,fahrenheit;

cout<<"enter temp in fehrenheit :";

cin>>fahrenheit;

celsius=((fahrenheit-32)*5)/9;
cout<<" in celsius : "<<celsius;
return 0;
}