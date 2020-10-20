#include<iostream>
using namespace std;
class Number
{
    int x,y;
public:
    Number()
    {
        x=0;
        y=0;
    }
    Number(int a,int b)
    {
        x=a;
        y=b;
    }
    void get(int &a, int &b)
    {
        a=x;
        b=y;
    }
    void set(int a, int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
   friend void operator << (ostream &os, Number obj)
   {
   os<<obj.x<<" "<<obj.y<<endl;
   }
};
    int main()
    {
    Number n1(2,3);
    cout<<n1;

    return 0;
    }
