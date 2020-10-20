#include<iostream>
using namespace std;
class rectangle
{
public:
    int height;
    int width;
};
int main()
{
    rectangle obj;
    cin>>obj.height>> obj.width;
    cout<<"Area "<<obj.height*obj.width<<endl;
    return 0;
}
