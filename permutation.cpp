#include<bits/stdc++.h>
using namespace std;
int used[20], num[20];

void permutation(int at, int n)
{
    int i;
    if(at==n+1)
    {
        for(i=1;i<=n;i++)
        {
        cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++) if(!used[i])
    {
        used[i]=1;
        num[at]=i;
        permutation(at+1,n);
        used[i]=0;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    permutation(1,n);
    return 0;
}
