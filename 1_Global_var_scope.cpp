#include <iostream>
using namespace std;

int c=45;
int main()
{
    int a,b,c;
    cout<<"Value of a is"<<endl;
    cin>>a;
    cout<<"Value of b is"<<endl;
    cin>>b;
    c=a+b;
    cout<<"Value of local c is "<<c<<endl;
    cout<<"Value of global c is "<<::c<<endl;// ::- operator helps to print global variables with same names as local one
    
    float e=4.2f;
    long double g=8.9l;
    cout<<sizeof(34.4)<<endl;
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(34.4l)<<endl;
    // when u will pass a decimal value in any function it always passes as double
    //f l help compiler to know they are really float and long double 
    // hover mouse over decimal values above u will see its a double if f or l is not there
    return 0;
}