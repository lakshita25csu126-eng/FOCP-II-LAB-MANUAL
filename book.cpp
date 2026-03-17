#include<iostream>
using namespace std;
class Book{
    string title;string author;double price;
    public:
    void inputDetails(){
        cout<<"Enter title of book: ";
        cin>>title;
        cout<<"Enter author: ";
        cin>>author;
        cout<<" price: ";
        cin>>price;
    }
    void displayDetails(){
        cout<<" title: "<<title;
        cout<<" author: "<<author;
        cout<<" price: "<<price;
    }

};
int main(){
    Book b1;
    b1.inputDetails();
    b1.displayDetails();
    return 0;
}