#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

struct data{
        char name[100];
        double height,weight;
        long long income;
};
bool compare(data a, data b)
{
    if(a.income==b.income)
    {
        if(a.height==b.height)
        {
            if(a.weight==b.weight)
            {
                return strlen(a.name)<strlen(b.name);
            }
            else
            {
                return a.weight<b.weight;
            }
        }
        else
        {
            return a.height<b.height;
        }
    }
    else
    {
        return a.income<b.income;
    }
}

int main()
{
  vector<data> boys;
  int n;
  cout<<"How many boys: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
      data s;
      cout<<"Person No. "<<i+1<<endl;
      cout<<"Enter Name : ";
      cin>>s.name;
      cout<<"Enter Height: ";
      cin>>s.height;
      cout<<"Enter Weight: ";
      cin>>s.weight;
      cout<<"Enter Income: ";
      cin>>s.income;
      boys.push_back(s);
  }
  sort(boys.begin(),boys.end(),compare);
  cout<<"After Sorting: "<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<"Person No. "<<i+1<<endl;
      cout<<"Name: "<<boys[i].name<<endl;
      cout<<"Height: "<<boys[i].height<<endl;
      cout<<"Weight: "<<boys[i].weight<<endl;
      cout<<"Income: "<<boys[i].income<<endl<<endl;
  }
}
