#include<bits/stdc++.h>
using namespace std;

//ifstream fin("a.txt");
    int n;
    int a,b,w;
    int am[100][100];
    int dis[100];
    int visit[100];
    int dij(int x)
    {
        visit[x]=1;
        for(int i=1;i<=n;i++)
        {
            if((visit[i]==0)&&(am[x][i]!=-1))
            {
                if((dis[x]+am[x][i]<dis[i])||(dis[i]==-1))
                {
                    dis[i]=dis[x]+am[x][i];
                }
            }
        }
        int smaller=-1,sw=-1;
        for(int i=0;i<=n;i++)
        {
            if(((visit[i]==0)&&(dis[i]>=0)&&(sw>dis[i]))||(sw==-1))
            {
                sw=dis[i];
                smaller=i;
            }
        }
        if(smaller!=-1)
        {
            dij(smaller);
            return 0;
        }
        return 0;
    }
int main()
{
    //fopen("a.txt","r",stdin);
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            am[i][j]=-1;
        }
    }
    for(int j=0;j<=n;j++)
        {
            dis[j]=-1;
        }
       dis[1]=0;
       for(int k=1;k<=n;k++)
       {
           cin>>a>>b>>w;
            am[a][b]=w;
            am[b][a]=w;
       }
       dij(1);
       for(int i=1;i<=n;i++)
       {
            cout<<dis[i]<<" ";
       }
       cout<<endl;
}
