#include<iostream>
using namespace std;
class sample{
    static int a;
    public:
    sample()
    {
    a++;
    }
    ~sample()
    {
    a--;
    }
    static void printinfo()
    {
    cout<<"The total object: "<<a<<endl;
    }
};
int sample::a=0;
int main()
{
sample s1,s2,s3,s4,s5,s6,s7,s8,s9,s0;
sample::printinfo();
return 0;
}
