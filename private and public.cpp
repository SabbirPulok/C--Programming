#include<iostream>
using namespace std;
class A{
public:
int x=11;
int y=100;
private:
void add();
};
void A::add()
{
cout<<x+y;
}
int main()
{
A obj;
obj.add();
return 0;
}
