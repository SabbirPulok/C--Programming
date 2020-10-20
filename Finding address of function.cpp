#include<iostream>
using namespace std;
int abc(int a, int b)
{
return a+b;
}
void abc(int a)
{
cout<<a<<endl;
}
int main()
{
int (*p1) (int,int);
p1=abc;
cout<<p1<<endl;
cout<<p1(4,9)<<endl;

void (*p2) (int);
p2=abc;
cout<<p2<<endl;
p2(8);

return 0;
}
