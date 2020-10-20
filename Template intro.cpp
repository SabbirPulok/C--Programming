#include<iostream>
using namespace std;
template <class t>///Generic class
t add(t a,t b)
{
return a+b;
}
int main()
{
cout<<add(5,6)<<endl;
cout<<add(4.5,6.5)<<endl;

string s1="ele",s2="ven";
cout<<add(s1,s2)<<endl;
return 0;
}
