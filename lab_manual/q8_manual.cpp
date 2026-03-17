// A monitoring system generates a sequence of numeric event IDs from 1 to N.
// To make logs easier to analyse, the system applies tags to certain events 
// based on predefined rules:
// • Events whose ID is divisible by 3 are tagged as “Buzz”
// • Events whose ID is divisible by 5 are tagged as “Fuzz”
// • Events divisible by both 3 and 5 receive both tags

#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter the id value : ";
     cin>>n;

    if(n%5==0 && n%3==0){
     cout<<" id is tagged as buzz and fuzz both ";}
     else if(n%5==0){
     cout<<"id is tagged as fuzz";}
     else if(n%3==0){
     cout<<"id is tagged as buzz";}
     else{
     cout<<"not tagged as any";}

     return 0;
}