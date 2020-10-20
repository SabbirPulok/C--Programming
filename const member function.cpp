#include<iostream>
using namespace std;
class example
{
    int a=5;
public:
    int change(int x) const
    {
        x=x+a;
        return x;
    }
};
int main()
{
    example obj;
    cout<<obj.change(5);
    return 0;
}
