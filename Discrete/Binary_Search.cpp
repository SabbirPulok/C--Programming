#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int n;

    /*cout<<"Give us a array of integers unless -1 :"<<endl;
    do
    {
        cin>>n;
        a.push_back(n);
    }while(n!=-1);
    */
    srand (time(NULL));
    for(int i=0;i<50;i++)
    {

        int m=rand();
        a.push_back(m);
    }


    sort(a.begin(),a.end());
    for(int i=0;i<50;i++)
    {
        cout<<a[i]<<endl;
    }
    freopen("rand.txt","w",stdout);
    //int begin = 0;
    //int end = a.size()-1;
    /*
    FILE *myFILE;

    myFILE = fopen("rand.txt","r");
    for(int i=0; i<50000;i++)
    {
        fscanf(myFILE,"%d",&a[i]);
    }*/
    int x;

    //cout<<"The number you want to search?"<<endl;
    //freopen("input.txt","r",stdin);

    cin>>x;
    freopen("rand.txt","r",stdin);
    int begin = 0;
    int end = a.size()-1;
    int m;
    while(begin < end)
    {
        m = (begin+end)/2;
        if(x>a[m])
        {
            begin=m+1;
        }
        else
        {
            end=m;
        }
    }
    int loc;
    freopen("output.txt","w",stdout);
    if(x==a[begin])
    {
        loc=begin+1;

        cout<<"The location of your searching number in ur array: "<<loc<<endl;
    }
    else
    {
        loc=0;
        cout<<"Not Found"<<endl;
    }
    //freopen("output.txt","w",stdout);
    //}
    /*for(int i=0; i < a.size(); i++)
    {
     cout<<a[i]<<" ";
    }*/
    return 0;
    //return 0;
}
