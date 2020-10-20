#include<iostream>
using namespace std;
class thispointer
{
public:
    int x;
    void showadd();
};
void thispointer:: showadd()
{
    cout<<"The address of this->x: "<<&(this->x)<<endl<<endl;
}
int main()
{
    thispointer ob,obj;
    ob.x=10;
    obj.x=20;
    cout<<"Address of obj1: "<<&ob.x<<endl;
    ob.showadd();
    cout<<"Address of obj2: "<<&obj.x<<endl;
    obj.showadd();

    return 0;
}
