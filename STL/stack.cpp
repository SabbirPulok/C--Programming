#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;
int main()
{
    stack<int>st;
    int n;
    cout<<"No of values: ";
    cin>>n;
    cout<<"Enter values on stack: ";
    while(n--)
    {
        int values;
        cin>>values;
        st.push(values);
    }
    cout<<"Stack values from top: "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
