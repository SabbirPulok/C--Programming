#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int main()
{
    string a,b,c;
    a = "Family Life ";
    b = a; ///copy string
    c = a+b; ///concat
    cout<<c<<endl;

    ///print with printf
    printf("%s\n",c.c_str());

    cout<<"Size of string: "<<c.size()<<endl;
    for(int i=0; i<c.size(); i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    vector<string> vtl;
    int n;
    cout<<"Size of string: ";
    cin>>n;
    cout<<"Enter string: ";
    while(n--)
    {
        string ch;
        cin>>ch;
        vtl.push_back(ch);
    }
    for(int i=0; i<vtl.size(); i++)
    {
        cout<<vtl[i]<<" ";
    }
}
