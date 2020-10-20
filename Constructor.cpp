#include<iostream>
using namespace std;
class rectangle{
int height;
int width;
public:
void set(int h,int w);
rectangle();
int area();
};
int rectangle::area()
{
return height*width;
}
///constructor///
rectangle::rectangle()
{
height=5;
width=4;
}
int main()
{
rectangle obj;
cout<<"area "<<obj.area()<<endl;
return 0;
}
