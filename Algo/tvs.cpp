#include<bits/stdc++.h>
using namespace std;
int tree[100] = {-1,1,2,3,0,4,5,6,0,0,7,8,0,0,9,10};
int weight[100] = {-1,0,4,2,0,2,1,3,0,0,1,4,0,0,2,3};
int d[100];

int N = 20;

void TVS(int i, int tolerance)
{
    if(tree[i]!=0)
    {
        if(2*i>N)
        {
            d[i] = 0;
        }
        else
        {
            TVS(2*i,tolerance);
            d[i] = max(d[i], d[2*i] + weight[2*i]);

            if(2*i+1<=N)
            {
                TVS(2*i+1, tolerance);
                d[i] = max(d[i], d[2*i+1] + weight[2*i+1]);
            }

            if(tree[i]!=1 && d[i]+weight[i]>tolerance)
            {
                cout<<tree[i]<<endl;
                d[i] = 0;

            }
        }
    }
}
int main()
{
 for(int i=0;i<=15;i++)
      cout<<" "<<tree[i+1];


cout<<endl;  cout<<endl;
    TVS(1,5);
cout<<endl;
    return 0;
}
