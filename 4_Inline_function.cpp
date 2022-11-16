#include <iostream>
using namespace std;
//inline function help to reduce time if same function is called multiple time
//the function is replaced by function code during compile time rather than 
//function being called again and again during runtime
inline int product(int a, int b){
    return a*b;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b);   
    return 0;
}
