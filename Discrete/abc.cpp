#include<bits/stdc++.h>
using namespace std;

int xR,yR;
void pos(int n)
{
    if(n==0)
    {
            yR++;
    }
    if(n==1)
    {
        xR++;
    }
    if(n==2)
    {
        yR--;
    }
    if(n==3)
    {
        xR--;
    }
    if(n==5)
    {
        xR--;
    }
}
int main()
{
    int t;
    string cmd;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int x,y,n=0;
        int col[64][64]={0};
        int used=0;
        cin>>x>>y;
        cin>>cmd;
        xR=x,yR=y;
        col[xR][yR]++;
        n=0;
        for(int i=0;i<cmd.length();i++)
        {
            if(cmd[i]=='R')
            {
                n++;
            }
            if(cmd[i]=='L')
            {
                n--;
            }
            if(cmd[i]=='F')
            {


                pos(n%4);
                col[xR][yR]++;
            //if(col[xR][yR]>1){used++;}
            }
        }
        //if(col[xR][yR]>1){ used++;} 4 4
//RFRRFRFRRFRFRRF
used=0;
    for(int i=0;i<64;i++)
    {
        for(int j=0;j<64;j++)
        {
            if(col[i][j]>1)
            {
                used++;
            }
        }
    }
        cout<<"Case #"<<i+1<<": "<<xR<<" "<<yR<<" "<<used<<endl;
   /* for(int i=0;i<12;i++)
    {
        for(int j=0;j<12; j++)
        {
            cout<<col[j][i]<<" ";
        }
        cout<<endl;
    }*/
    }
return 0;
}
