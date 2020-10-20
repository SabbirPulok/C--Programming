#include<iostream>
using namespace std;
int add(int a,int b, int c)
{
    return a+b*c;
}
int main()
{
    int n,i,sum=1;
    cin>>n;
    if(n==0)
    {
        sum=0;
    }
    else if(n==1)
    {
        sum=1;
    }
    else
    {
        for(i=2; i<=n; i=i+3)
        {
            sum+=add(i,i+1,i+2);
        }
        if((n-1)%3==1)
        {
            sum-=(n+1)*(n+2);
        }
        if((n-1)%3==2)
        {
            sum=(sum-(n*(n+1)))+n;
        }
        if ((n-1)%3==0)
            {
             sum=sum;
            }
    }

    cout<<sum<<endl;
    return 0;
}
