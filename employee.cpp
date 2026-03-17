#include<iostream>
using namespace std;
class Employee{
    int empId;
    string name;
    double monthlySalary;
    double calculateAnnualSalary()
    {
        return (12*monthlySalary);
    }
    public:
    void inputDetails()
    {
        cout<<"enter empId: ";
        cin>>empId;
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter monthly salary: ";
        cin>>monthlySalary;
    }
    void displayDetails()
    {
        cout<<" empId: "<<empId;
        cout<<"\n name: "<<name;
        cout<<"\n salary:"<<calculateAnnualSalary();
    }
};
int main(){
    Employee e1;
    e1.inputDetails();
    e1.displayDetails();
    return 0;
}