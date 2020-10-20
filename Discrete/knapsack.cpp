#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


typedef pair<int,int> value;


vector<value> arr;


bool wgt(value A,value B)
{
    return A.first>B.first;
}
bool cost(value A,value B)
{
    return A.second<B.second;
}
bool cpu(value A,value B)
{
    return B.second*A.first<B.first*A.second;
}
int wgtminimize(int n,int m)
{
    double x[n];
    sort(arr.begin(),arr.end(),wgt);
    for(int i=0; i<n; i++)
    {
        x[i] = 0.0;
    }
    double totalCost = 0.0;
    double wixi = 0.0;
    int i = 0;
    while(m)
    {
        if(arr[i].first<=m)
        {
            m-=arr[i].first;
            x[i] = 1;
            totalCost += arr[i].second;
            wixi += arr[i].first;
        }

        else if(arr[i].first>m)
        {
            double frac  = (double)m/(double)arr[i].first;
            totalCost += (double)arr[i].first * frac;
            x[i] = (double)frac;
            m = 0;
            wixi += arr[i].first * frac;
        }
        i++;
    }
    for(i=0; i<n-1; i++)
    {
        cout<<x[i]<<", ";
    }
    cout<<x[n-1]<<" ";


    //cout<<x[]<<" ";
    cout<<"\t\t\t\t\t"<<wixi<<"\t"<<totalCost<<endl;

}
int costminimize(int n,int m)
{
    double x[n];
    sort(arr.begin(),arr.end(),cost);
    for(int i=0; i<n; i++)
    {
        x[i] = 0.0;
    }
    double totalCost = 0.0;
    double wixi = 0.0;
    int i = 0;
    while(m)
    {
        if(arr[i].first<=m)
        {
            m-=arr[i].first;
            x[i] = 1;
            totalCost += arr[i].second;
            wixi += arr[i].first;
        }

        else if(arr[i].first>m)
        {
            double frac  = (double)m/(double)arr[i].first;
            totalCost += (double)arr[i].first * frac;
            x[i] = (double)frac;
            m = 0;
            wixi += arr[i].first * frac;
        }
        i++;
    }
    for(i=0; i<n-1; i++)
    {
        cout<<x[i]<<", ";
    }
    cout<<x[n-1]<<" ";


    //cout<<x[]<<" ";
    cout<<"\t\t\t\t\t"<<wixi<<"\t"<<totalCost<<endl;
}
int cpuminimize(int n,int m)
{
    double x[n];
    sort(arr.begin(),arr.end(),cpu);
    for(int i=0; i<n; i++)
    {
        x[i] = 0.0;
    }
    double totalCost = 0.0;
    double wixi = 0.0;
    int i = 0;
    while(m)
    {
        if(arr[i].first<=m)
        {
            m-=arr[i].first;
            x[i] = 1;
            totalCost += arr[i].second;
            wixi += arr[i].first;
        }

        else if(arr[i].first>m)
        {
            double frac  = (double)m/(double)arr[i].first;
            totalCost += (double)arr[i].first * frac;
            x[i] = (double)frac;
            m = 0;
            wixi += arr[i].first * frac;
        }
        i++;
    }
    for(i=0; i<n-1; i++)
    {
        cout<<x[i]<<", ";
    }
    cout<<x[n-1]<<" ";


    //cout<<x[]<<" ";
    cout<<"\t\t\t\t\t"<<wixi<<"\t"<<totalCost<<endl;
}
int all(int n,int m)
{
    printf("x\t\t\t\t\twixi\tpixi\n");
    wgtminimize(n,m);
    costminimize(n,m);
    cpuminimize(n,m);
}

int main()
{
    int n,m;
    cin>>n>>m;
    //freopen("text.txt","r",stdin);
    for(int i=0; i<n; i++)
    {
        int wt,cost;
            cin>>wt>>cost;
        arr.push_back(value(wt,cost));
    }
    cout<<"Which strategy you follow?"<<endl;
    cout<<"1. weight minimization"<<endl;
    cout<<"2.cost minimization"<<endl;
    cout<<"3.cost per unit minimization"<<endl;
    cout<<"4.Best all of them?"<<endl;
    int cmd;

    while(cin>>cmd!= 0)
    {
        switch(cmd)
        {
        case 1:
            wgtminimize(n,m);
            break;
        case 2:
            costminimize(n,m);
            break;
        case 3:
            cpuminimize(n,m);
            break;
        case 4:
            all(n,m);
            break;
        }
    }
    return 0;
}
