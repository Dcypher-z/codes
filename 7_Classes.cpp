#include <iostream>
using namespace std;
class emp
{
    private://Private variables
        int a,b,c;
    public://Public Variables
        int d,e;
        void setData(int a1, int b1, int c1);//functions can be written in class or outside class after declaring them in class
        void getData()
        {
            cout<<"The value of a = "<<a<<endl;
            cout<<"The value of b = "<<b<<endl;
            cout<<"The value of c = "<<c<<endl;
            cout<<"The value of d = "<<d<<endl;
            cout<<"The value of e = "<<e<<endl;
        }
}; 

void emp :: setData(int a1 , int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;   
}

int main()
{
    emp aryan;
    aryan.d=7;
    aryan.e=9;
    //we can't use aryan.a=8 to assign the value to a becoz a is a private variable which can only be called by a function in emp class
    aryan.setData(1, 2, 3);
    aryan.getData();
    return 0;
}
