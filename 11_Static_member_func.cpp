#include <iostream>
using namespace std;
class emp
{
    int id;
    static int count;//if count weren't static each time count would be initialized whenever a new object of emp class was made
                     // static variables have a default value of 0
public:
    void setData();
    void getData();
    static void getCount();
};

int emp ::count; //way to define static variable of a class

void emp::setData()
{
    cout<<"Enter ID "<<endl;
    cin >> id;
}

void emp::getData()
{
    cout << "Id value is " << id <<" Count value is "<<count<< endl;
    count++;
}

void emp::getCount()
{
    //cout << "Id value is " << id << endl;//id can't be accessed by count function as it a non static member
    cout << "Count value is " << count << endl;
}
int main()
{
    emp a, b, c;
    a.setData();
    a.getData();
    emp:: getCount();
    
    b.setData();
    b.getData();
    emp:: getCount();

    c.setData();
    c.getData();
    emp:: getCount();

    return 0;
}
//static variables can be accessed by any function but static membership function can only access static variables 