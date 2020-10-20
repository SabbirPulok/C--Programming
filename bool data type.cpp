#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
bool GR;
int x,y,z;
x=5,y=10,z=15;
GR=x>y;
cout<<"X>Y:"<<GR<<endl;
GR=y<z;
cout<<"Y<Z:"<<GR<<endl;
GR=x-z-y;
cout<<"X-Z-Y on bool:"<<GR<<endl;
x=x-z-y;
cout<<"X-Z-Y="<<x<<endl;
GR=true;
cout<<"bool=true:"<<GR<<endl;
GR=false;
cout<<"bool=False:"<<GR<<endl;
}
