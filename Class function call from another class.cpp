#include<iostream>
using namespace std;
class A
{
public:
    void funcA()
    {
        cout<<"This is Function A."<<endl;
    }
    void funcB()
    {
        cout<<"This is Function B."<<endl;
    }
};
class B
{
    A a;
public:
    void funcD()
    {
        cout<<"This is function D."<<endl;
    }
    void funcC()
    {
        a.funcA();
        a.funcB();
    }
};
int main()
{
    B b;
    b.funcD();
    b.funcC();
    return 0;
}
