#include<iostream>
using namespace std;
class rectangle{
int height;
int width;
public:
//void set(int h,int w);
int area();
rectangle(int h,int w);
~rectangle();
};
int rectangle::area()
{
return height*width;
}
///constructor///
rectangle::rectangle(int h,int w)
{
height=h;
width=w;
cout<<"Constructor  "<<area()<<endl;
}
rectangle::~rectangle()
{
cout<<"Destructor  "<<area()<<endl;
}
int main()
{
rectangle obj1(5,6),obj2(1,2);
//cout<<"area "<<obj.area()<<endl;
return 0;
}
