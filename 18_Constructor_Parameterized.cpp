#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
     Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes parameters
{
    a = x;//these values are assigned when an object is created
    b = y;
}
int main()
{
    //implicit call 
    Complex m(4,5);
    m.printNumber();

    //explicit call
    Complex n= Complex(6,7);
    n.printNumber();
    return 0;
}