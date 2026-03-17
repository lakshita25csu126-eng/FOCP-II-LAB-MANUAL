//  A text editor auto-detects whether an input letter is a vowel,
//  a consonant or a number. Implement a
// solution to classify the symbol.

#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"enter the value/character :";
    cin>>a;

    if(isdigit(a))
         cout<<"it is a number";
    else if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || 
        a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
         cout<<" it is a vowel";
    else
       cout<<" it is a consonant";

       return 0;
}