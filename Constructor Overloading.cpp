#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc(int x)
    {
        a=x;
    }
    abc()
    {
        a=0;
    }
    abc(int x,int y)
    {
        a=x+y;
    }
    int ret()
    {
        return a;
    }
};
int main()
{
    abc ob(5),ob1,ob2(4,7);
    cout<<ob.ret()<<endl;
    cout<<ob1.ret()<<endl;
    cout<<ob2.ret()<<endl;
    return 0;
}
