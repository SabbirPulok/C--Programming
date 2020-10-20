#include<iostream>
using namespace std;
int add(int a, int b)
{
return a+b;
}
double add(double a,double b,double c)
{
return a+b+c;
}
int main()
{
cout<<add(5,5)<<endl;
cout<<add(5.3,4.7,5.2);
return 0;
}
