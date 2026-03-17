#include<iostream>
using namespace std;
class Rectangle{
    float length; float width;
    float calculatePerimeter()
    {
        return (2.0*(length+width));

    }
    float calculateArea()
    {
        return( length*width);
    }
    public:
    void inputDimensions()
    {
        cout<<" enter length and width: ";
        cin>>length>>width;
    }
    void displayResult()
    {
        cout<<" length:"<<length<<"\n width: "<<width;
        cout<<" perimeter:"<<calculatePerimeter();
        cout<<" area:"<<calculateArea();
    }
};
    int main()
    {
        Rectangle r1;
        r1.inputDimensions();
        r1.displayResult();
        return 0;
    }


