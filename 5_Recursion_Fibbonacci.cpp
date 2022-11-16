#include <iostream>
using namespace std;
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main()
{
    int n;
    cout<<"Enter the index at which u want to find the sequence value ";
    cin>>n;
    cout<< "Ans = "<<fib(n);
    return 0;
}