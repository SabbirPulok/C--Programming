#include<iostream>
using namespace std;
    class A
    {
        int prv_a;
    public:
        A()
        {
            prv_a=0;
        }
        void getprv_a(int x)
        {
            prv_a=x;
        }
        friend class B;
    };
    class B
    {
        int prv_b;
    public:
        B()
        {
            prv_b=0;
        }
        void getprv_b(A&y)
        {
            prv_b=y.prv_a+20;
        }
        void showprv_b(A y)
        {
            cout<<"value of prv_a= "<<y.prv_a<<endl;
            cout<<"value of prv_b= "<<prv_b<<endl;
        }
    };
    int main()
    {
        A obj1;
        B obj2;
        obj1.getprv_a(20);
        obj2.getprv_b(obj1);
        obj2.showprv_b(obj1);
        return 0;
    }
