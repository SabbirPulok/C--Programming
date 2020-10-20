#include<iostream>
using namespace std;
class X
{
 int x;
public:
    X()
    {
    cout<<"Constructing..."<<endl;
    }
    void set(int a)
    {
    x=a;
    }
    int get(void)
    {
    return x;
    }
    ~X()
    {
        cout<<"After calling func(), x is "<<get()<<endl;
    }
};
void func(X *x)
{
cout<<"Value of x in func() "<<x->get()<<endl;
x->set(15);
cout<<"Value of x in func() "<<x->get()<<endl;
}
int main()
{
X x1;
x1.set(10);
func(&x1);
return 0;
}
