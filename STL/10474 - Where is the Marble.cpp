#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,q;
    int count=0;
     while(scanf("%d %d",&n,&q)==2)
    {
        vector<int>marbles;
        vector<int>queries;
        count++;
        if(n==0 & q==0)
        {
            break;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int values;
                cin>>values;
                marbles.push_back(values);
            }
            for(int i=0;i<q;i++)
            {
                int values;
                cin>>values;
                queries.push_back(values);
            }
            cout<<"CASE# "<<count<<":"<<endl;
            vector<int>::iterator ptr;
            sort(marbles.begin(),marbles.end());
            for(ptr=queries.begin(); ptr!=queries.end(); ptr++)
            {
                vector<int>::iterator itr;
                //cout<<"Queries: "<<*ptr<<endl;

                itr=find(marbles.begin(),marbles.end(),*ptr);
                if(itr!=marbles.end())
                {
                    cout<<*ptr<<" found at "<<itr-marbles.begin()+1<<endl;
                }
                else
                {
                    cout<<*ptr<<" not found"<<endl;
                }
            }
        }
    }

}
