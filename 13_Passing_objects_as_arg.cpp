#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void Sum(complex o1, complex o2)
    {
        int re = o1.a + o2.a;
        int img = o1.b + o2.b;
        cout << "Sum of " << o1.a << "+i" << o1.b << " and " << o2.a << "+i" << o2.b << "= ";
        cout << re << " + i" << img;
    }
};
int main()
{
    complex object1, object2, c;
    object1.setData(1, 6);
    object2.setData(2, 3);
    c.Sum(object1, object2);
    return 0;
}