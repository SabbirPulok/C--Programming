#include<iostream>
using namespace std;
int main()
{
int n,rev=0,rem=0;
cout<<"enter a number:";
cin>>n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
cout<<rev;
}
