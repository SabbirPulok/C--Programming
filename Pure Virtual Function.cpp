#include<iostream>
using namespace std;
class base
{
public:
    virtual void eat()=0;
};
class derive: public base
{
public:
    void eat()
    {
    cout<<"KHA."<<endl;
    }
};
int main()
{
base *ptr;
derive obj;
ptr=&obj;
ptr->eat();
return 0;
}
