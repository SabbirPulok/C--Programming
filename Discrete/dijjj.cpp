#include<iostream>
using namespace std;

int n,x,a,b,w;
int arr[100][100];
int dis[100];
int visited[100];

//int dij(int x);

int dij(int x)
{
    visited[x]=1;

    for(int i=1;i<=n;i++)
    {
        if((visited==0)&&(arr[x][i]!=-1))
        {
            if((dis[x]+arr[x][i]<dis[i])||(dis[i]==-1))
            {
                dis[i]=dis[x]+arr[x][i];
            }

        }

    }

int smaller=-1,sw=-1;
for(int i=0;i<=n;i++)
 {
    if((visited[i]==0) && (dis[i]>=0)&& ((sw>dis[i])||(sw==-1)))
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
    cin>>n;
   for(int i=0;i<100;i++)
    visited[i]=0;


    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            arr[i][j]=-1;
        }
    }

    for(int i=0;i<=n;i++)
    {
        dis[i]=-1;
    }

    dis[1]=0;

    for(int k=1;k<=n;k++)
    {
        cin>>a;
        cin>>b;
        cin>>w;

        arr[a][b] = w;
        arr[b][a] = w;
    }

    dij(1);

    for(int i=1 ;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }

}
