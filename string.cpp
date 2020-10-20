#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    a="Myboy,";
    b=a;
    c=a+b;
    cout<<c<<endl;
    printf("%s\n",c.c_str());
     for(int i=0;i<c.size();i++)
            cout<<c[i]<<endl;
    return 0;
}
