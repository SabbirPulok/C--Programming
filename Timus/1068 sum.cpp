#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d,sum;
    cin>>a;
    d=abs(a);
    //cout<<d;
    sum=(d*(d+1)/2);
    if(a>0)
    {
        cout<<sum;
    }
    else
    {
        cout<<((-1)*sum)+1;
    }
    return 0;
}
