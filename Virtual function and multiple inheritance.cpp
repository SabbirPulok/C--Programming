#include<iostream>
using namespace std;
class base
{
public:
    virtual void msg()
    {
        cout<<"Message from base."<<endl;
    }
    /*void func()
    {
        cout<<"BASE"<<endl;
    }*/
};
class derive1: public base
{
    public:
    void msg()
    {
        cout<<"Message from derive1."<<endl;
    }
};
class derive2:public derive1
{ };
int main()
{
    base *baseptr;
    derive1 d1,d2;
    derive2 d3;
    baseptr=&d1;
    baseptr->msg();
    baseptr = &d2;
    baseptr-> msg();
    baseptr = &d3;
    baseptr -> msg();
    return 0;
}
