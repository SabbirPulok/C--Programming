#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cost[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10],m,wt;
    vector<int>tvs;

    cout<<"Enter no. of vertices: "<<endl;
    cin>>n;
    cout<<"Enter no. of edges:"<<endl;
    cin>>m;
    cout<<"EDGES\n";

    for(k=1;k<=m;k++)
    {
        cin>>i>>j;
        cout<<" = ";
        wt=1+rand()%10;
        cost[i][j]=wt;
        cout<<wt;
    }
    cout<<"Enter initial vertex";
    cin>>v;
    cout<<v<<" ";
    tvs.push_back(v);
    k=1;
    visited[v]=1;
    while(k<n)
    {
        for(j=n;j>=1;j--)
        {
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {

                visit[j]=1;
                stk[top]=j;
                top++;
            }
            v=stk[--top];
            cout<<v<<" ";
            tvs.push_back(v);
            k++;
            visit[v]=0;
            visited[v]=1;
        }
    }

}
