#include<bits/stdc++.h>
using namespace std;
int n;
int queen[8];
int col[8],diagonal1[2*8],diagonal2[2*8];
void nqueen(int at, int n)
{
    int i;
    if(at==n+1)
    {
        cout<<"row column = ";
        for(i=1; i<=n; i++)
        {
            cout<<i<<" "<<queen[i];
        }
        cout<<endl;
        return;
    }
    for(i=1; i<=n; i++)
    {
        if(col[i]||diagonal1[i+at]||diagonal2[n+i-at])
        {
            continue;
        }
        queen[at]=i;
        col[i]=diagonal1[i+at]=diagonal2[n+i-at]=1;
        nqueen(at+1,n);
        col[i]=diagonal1[i+at]=diagonal2[n+i-at]=0;
    }
}
int main()
{
    cin>>n;
    cout<<endl;
    nqueen(1,n);
    return 0;
}
