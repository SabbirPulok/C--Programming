#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;
int main()
{
    queue<int>qu;
    priority_queue<int>priQu;
    int n;
    cout<<"No of values: ";
    cin>>n;
    cout<<"Enter values on Queue: ";
    while(n--)
    {
        int values;
        cin>>values;
        qu.push(values);
        priQu.push(values);
    }
    //copy(qu.begin(),qu.end(),priQu.begin());
    cout<<"Queue values from top: "<<endl;
    while(!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;
    ///Priority Queue
    cout<<"Priority Queue values from top: "<<endl;
    while(!priQu.empty())
    {
        cout<<priQu.top()<<" ";
        priQu.pop();
    }
}
