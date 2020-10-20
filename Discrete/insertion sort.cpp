#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int>a)
{
    vector<int>b;
    for (i=a.begin(); i < a.end(); i++)
    {
        element = a[i];
        i=j;
        while( j > 0 && a[j-1] > element)
        {
            int temp = a[j];
			  a[j] = a[j-1];
			  a[j-1] = temp;
            j--;
        }
        a[j]=element;
        b.push_back(a[j]);

    }
    return b;
}
int main()
{
    vector<int>a;
    vector<int>b;
    int i, j, element,n;

    do
    {
        cin>>n;
        a.push_back(n);

    }
    while(n!=-1);
    insertionsort(a);
    for(j=a.begin(); j<a.end(); j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
