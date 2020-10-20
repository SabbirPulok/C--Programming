#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[]={6,7,2,4,9},i;
sort(arr,arr+5);
for(i=0;i<5;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
