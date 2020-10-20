#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>S;
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        S.push(n);
    }
    cout<<endl;
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
    cout<<endl;
    return 0;
}
