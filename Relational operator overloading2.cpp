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
    bool operator &&(Number obj);
};
bool Number :: operator &&(Number obj)
{
    return (x&&y) && (obj.x&&obj.y);
}
int main()
{
    Number n(5,2),m(6,7),p;
    if(n&&m)
    {
    cout<<"Ok"<<endl;
    }
    else
    {
    cout<<"Error"<<endl;
    }
    return 0;
}
