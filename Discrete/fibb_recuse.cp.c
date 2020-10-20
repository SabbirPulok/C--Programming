#include<bits/stdc++.h>
using namespace std;

int fibb(int n)
{
    if(n==0)
        return 0;
    if(n==1)
            return 1;

    return fibb(n-1)+fibb(n-2);
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout <<"The"<<x<<" th number of this series: "<<fibb(n-1)<<endl;
    }
    return 0;
}
