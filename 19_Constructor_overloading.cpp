#include <iostream>
using namespace std;
class num{
    int a;
    int b;
    public:
    num (int x, int y)
    {
        a=x;
        b=y;
        cout<<"Constructor 1 used"<<endl;
    }
    num (int x)
    {
        a=x;
        cout<<"Contructor 2 used"<<endl;
    }
    void print1()
    {
        cout<<a<<" "<<b<<endl;
    } 
    void print2()
    {
        cout<<a<<endl;
    } 
    
};
int main()
{
    num o(5,7);
    o.print1();

    num p(3);
    p.print2();

    return 0;
}