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
    Number operator ++();
    Number operator ++(int a);
    Number operator -();
    Number operator -(Number obj);
};
Number Number:: operator ++(int a)
{
    Number tmp;

    tmp.x=x;
    tmp.y=y;
    x++;
    y++;
    return tmp;
}
Number Number:: operator ++()
{
    Number tmp;
    ++x;
    ++y;
    tmp.x=x;
    tmp.y=y;

    return tmp;
}
Number Number:: operator -()
{
    Number tmp(-x,-y);
    return tmp;
}
Number Number:: operator -(Number obj)
{
    Number tmp(x-obj.x,y-obj.y);

    return tmp;
}
int main()
{
    Number n(5,6),m(16,17),p;
    cout<<"Before unary ++ ";n.print();
    ++n;
    cout<<"After unary ++ ";n.print();
    p=n++;
    p.print();
    p=m-n;
    p.print();
    p=-n;
    p.print();
    return 0;
}
