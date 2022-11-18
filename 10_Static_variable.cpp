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
};

int emp ::count; //way to define static variable of a class

void emp::setData()
{
    cin >> id;
}

void emp::getData()
{
    cout << "Id value is " << id << endl;
    cout << "Count value is " << count << endl;
    count++;
}
int main()
{
    emp a, b, c;
    a.setData();
    a.getData();
    b.setData();
    b.getData();
    c.setData();
    c.getData();

    return 0;
}