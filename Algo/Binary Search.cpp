#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    int n;

    cout<<"Give us a array of integers unless -1 :"<<endl;
    do
    {
        cin>>n;
        a.push_back(n);
    }while(n!=-1);

    int begin = 0;
    int end = a.size()-1;
    int x;

    cout<<"The number you want to search?"<<endl;
    cin>>x;

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
    /*for(int i=0; i < a.size(); i++)
    {
     cout<<a[i]<<" ";
    }*/
    return 0;
    //return 0;
}
