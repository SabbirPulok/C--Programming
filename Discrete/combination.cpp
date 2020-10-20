#include<bits/stdc++.h>
using namespace std;
int n,k,num[20];
void combination(int at,int last)
{
    int i;
    if(at==k+1)
    {
        for(i=1;i<=k;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(i=last+1;i<=n-k+at;i++)
    {
        num[at]=i;
        combination(at+1,i);
    }
}
int main()
{
    cin>>n>>k;
    cout<<"Combination "<<n<<"C"<<k<<": "<<endl;
    combination(1,0);
    return 0;
}
