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

    for(int i=0; i < a.size(); i++)
        for(int j=0; j <a.size()-i; j++)
        {
            if(a[j] <= a[j+1])
                swap(a[j],a[j+1]);
        }
    for(int i=1; i < a.size(); i++)
    {
     cout<<a[i]<<endl;
    }
    return 0;
}
