#include<iostream>
using namespace std;
int main(){
    std::cout<<"Enter marks "<<endl;
    float a,b,c;
    std::cin>>a>>b>>c;
    float avg;
    avg=(a+b+c)/3;
    std::cout<<"The average is "<<avg<<endl;

    return 0;
}