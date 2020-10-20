#include<iostream>
using namespace std;
class rectangle{
public:
int height;
int width;
int area();
};
int rectangle::area()
{
return height*width;
}
int main()
{
rectangle obj;
cout<<"Height ";
cin>>obj.height;
cout<<"Width ";
cin>>obj.width;
cout<<"Area "<<obj.area();
return 0;
}
