#include<iostream>
using namespace std;
class abc
{
public:
    static int a;
    int b;
    void fun()
    {
        cout<<++a<<" "<<++b<<endl;
    }
    abc()
    {
        b=0;
    }
};
int abc::a=0;
int main()
{
    abc obj,obj1;
    obj.fun();
    obj.fun();
    obj1.fun();
    return 0;
}
