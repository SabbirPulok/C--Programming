#include<iostream>
using namespace std;
void func(int x,double y=3.1416)
{
cout<<"Values of x and y are: "<<x<<" , "<<y<<endl;
}
int main()
{
func(10);
func(10,7.2832);
}
