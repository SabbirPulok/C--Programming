#include<iostream>
using namespace std;
class rectangle
{
public:
    int height;
    int width;
    int area();
};
inline int rectangle::area()
{
  return height*width;
}
int main()
{
    rectangle obj;
    cin>>obj.height>> obj.width;
    cout<<"Area "<<obj.area()<<endl;
    return 0;
}
