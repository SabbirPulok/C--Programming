#include<iostream>
using namespace std;
class addAB
{
    int a,b;
public:
    addAB(int x,int y)
    {
        a=x;
        b=y;
    }
    void add_AB(int p)
    {
        cout<<"obj ["<<p+1<< "] a+b ="<<a+b<<endl;
    }
};
void print(addAB *ptr)
{
    for(int i=0; i<3; i++)
    {
        ptr->add_AB(i);
        ptr++;
    }
}
int main()
{
    addAB obj[3]= {addAB(1,2),addAB(2,3),addAB(3,4)};
    print(obj);
    return 0;
}
