#include <iostream>
using namespace std;
class employee{
    private:
    int id;
    int salary;
    public:
    void setId(){
        cout<<"Enter ID number: "<<endl;
        cin>>id;
    }
    void setSalary(){
        cout<<"Enter Salary: "<<endl;
        cin>>salary;
    }
    void getInfo(){
        cout<<"Salary of employee with id : "<<id<<" is "<<salary<<endl;
    }

};
int main()
{
    employee a[4];
    for(int i=0;i<4;i++)
    {
        a[i].setId();
        a[i].setSalary();
        a[i].getInfo();
        
    }
    return 0;
}