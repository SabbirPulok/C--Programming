#include<iostream>
using namespace std;
class Number
{
    int x,y;
public:
    Number()
    {
        x=0;
        y=0;
    }
    Number(int a,int b)
    {
        x=a;
        y=b;
    }
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
    Number operator +(Number obj);
    Number operator =(Number obj);
    Number operator -(Number obj);
};
Number Number::operator+(Number obj)
{
   Number tmp;
    tmp.x=x+obj.x;
    tmp.y=y+obj.y;
    return tmp;
}
Number Number::operator-(Number obj)
{
    Number tmp;
    tmp.x=x-obj.x;
    tmp.y=y-obj.y;
    return tmp;
}
Number Number::operator=(Number obj)
{
    x=obj.x;
    y=obj.y;
    return *this;
}
int main()
{
    Number ob(2,5),obj,obj1;
    obj.set(3,5);
    obj1=obj+ob;
    obj1.print();
    obj1=ob-obj;
    obj1.print();
    obj=ob;
    obj.print();
    return 0;
}
