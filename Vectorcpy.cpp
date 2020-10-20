#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< int >v,t;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    t=v;
    for(int i=0; i<t.size(); i++)
        cout<<v[i]<<endl;
    return 0;
}
