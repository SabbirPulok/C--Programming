#include<iostream>
using namespace std;
int main()
{
    int t,point=0;
    char n[10];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<10; j++)
        {
            while(n[j]=='\0')
            {
                cin>>n[j];

            }
            point=j;
        }
        if(point>5)
        {
        for(int k=0;k<5;k++)
        {
        cout<<n[k];
        }
        }
        else
        {
        for(int l=0;l<point;l++)
        {
        cout<<n[l];
        }
        }
    }
return 0;
}
