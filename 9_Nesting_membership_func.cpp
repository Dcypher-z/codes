#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void chkBin(); //function to check whether string s is binary or not

public:
    void readString();
    void ones(); //convert binary to ones complement
};

void binary ::readString()
{
    cout << "Enter binary number: " << endl;
    cin >> s;
}

void binary::chkBin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Given number is not binary" << endl;
            exit(0);
        }
    }
}
void binary ::ones()
{
    chkBin();//as chkBin is private func it can be called by ones as its a membership function of class binary and it will take same arguments as the membership function its being called for
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    cout << s;
}
int main()
{
    binary a;
    a.readString();
    //a.chkBin(); as chkBin is a private function it can only be accessed by other membership functions of class binary.
    a.ones();
    return 0;
}