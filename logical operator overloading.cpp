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
    Number operator +(Number obj);
    bool operator >(Number obj);
    bool operator <(Number obj);
    bool operator ==(Number obj);
};
Number Number:: operator +(Number obj)
{
    Number tmp;
    tmp.x=x+obj.x;
    tmp.y=y+obj.y;
    return tmp;
}
bool Number:: operator >(Number obj)
{
return x+y>(obj.x+obj.y);
}
bool Number:: operator <(Number obj)
{
return x+y<(obj.x+obj.y);
}
bool Number:: operator ==(Number obj)
{
return x+y==(obj.x+obj.y);
}
int main()
{
    Number n(5,6),m(6,7),p;
    p=m+n;
    p.print();
    if(n>m)
    {
    cout<<"n"<<endl;
    }
    else if(n==m)
    {
    cout<<"n=m"<<endl;
    }
    else
    {
    cout<<"m"<<endl;
    }
    return 0;
}
