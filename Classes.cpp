#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class sample{
 public:
     int a,b;
     void add();
};
void sample::add(){
 cout<<"\nA+B="<<a+b;
}
main()
{
    sample x,y;
    x.a=5;
    x.b=10;
    y.a=23;
    y.b=24;
    x.add();
    y.add();
}
