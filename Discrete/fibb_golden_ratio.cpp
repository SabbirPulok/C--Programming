#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("arr.txt","r",stdin);
    //freopen("arr2.txt","w",stdout);
    double golden,result;
    int n,count=1,last;
    golden = (1+sqrt(5))/2;
    //cout<<"How many number ?\n";
    cin>>n;
    if(n==0)
    {
        printf("There are no numbers on this series.\n");
    }
    else if(n==1)
        printf("The 1st number of this series : 0\nThe step taken for this algorithm %d, ",count);
    else if(n==2)
        printf("The 2nd number of this series : 1\nThe step taken for this algorithm %d",count);
    else
        result = pow(golden,n-1)/sqrt(5);
        last = ceil(result);
        cout<<"The "<<n;
        cout<<"th number of the fibonacci series "<<last<<endl;
        cout<<"The step taken for this algorithm "<<count;

}
