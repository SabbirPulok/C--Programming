#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[50000];

srand( time(NULL));
 for(int i=0;i<50000;i++)
    {

        arr[i]= rand();
    }
    sort(arr,arr+50000);
    freopen("rand.txt","w",stdout);
    for(int i=0;i<50000;i++)
    {
        cout<<arr[i]<<endl;
    }
    int begin = 0;
    int end = 50000-1;
    int x;

    cout<<"\nThe number you want to search?"<<endl;
    cin>>x;

    int m;
    while(begin < end)
    {
        m = (begin+end)/2;
        if(x>arr[m])
        {
            begin=m+1;
        }
        else
        {
            end=m;
        }
    }
    int loc;
    if(x==arr[begin])
    {
        loc=begin+1;
        cout<<"The location of your searching number in ur array: "<<loc<<endl;
    }
    else
    {
        loc=0;
        cout<<"Not Found"<<endl;
    }
    //freopen("asp.txt","w",stdout);
    return 0;

}
