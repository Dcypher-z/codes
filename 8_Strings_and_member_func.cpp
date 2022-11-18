#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void readString();
    void chkBin(); //function to check whether string s is binary or not
    void ones();//convert binary to ones complement
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
        if (s.at(i) != '0' && s.at(i) != '1' )
        {
            cout << "Given number is not binary" << endl;
            exit(0);
        }
    }
}
void binary ::ones(){
    for(int i=0;i<s.length();i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
    cout<<s;
}
int main()
{
    binary a;
    a.readString();
    a.chkBin();
    a.ones();
    return 0;
}