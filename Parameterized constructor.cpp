#include<iostream>
using namespace std;
class sample
{
private:
    int x,y;
    int add()
    {
        cout<<x+y<<endl;
    }
public:
    sample(int a, int b)
    {
        x=a;
        y=b;
        //add();
    }
    ~sample()
    {
        add();
    }
};
int main()
{
    sample smp(10,10);
}
