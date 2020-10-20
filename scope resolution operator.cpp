#include<iostream>
using namespace std;
int x;
void changeX(void)
{
x=20;
}
int main()
{
int x;
x=10;
changeX();
cout<<"Value of x is:"<<::x;
}
