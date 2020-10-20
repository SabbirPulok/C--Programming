#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[52],a[13];
srand( time(NULL));
{
for(int i=0; i<52; i++)
{
    arr[i]=rand();
}
for(int i=0;i<13;i++)
{
    a[i]=arr[i]%52+1;
}
for(int i=0;i<13;i++)
{
    cout<<a[i]<<" ";
}

}
return 0;

}

