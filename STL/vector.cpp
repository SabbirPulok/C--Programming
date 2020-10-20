#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"No of values: ";
    cin>>n;
    while(n--)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    cout<<"V values: ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>t;
    ///copying
    t=v;
    cout<<"T values: ";
    for(int i=0; i<t.size(); i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;

    ///2D Vector
    vector<vector<int>>d={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        };
    cout<<"2D vector output: "<<endl;
    for(int i=0; i<d.size(); i++)
    {
        for(int j=0; j<d[i].size(); j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Another 2D vector"<<endl;
    int row = 3;
    int cols = 4;

    /// Create a vector containing row vectors of size cols.
    vector<vector<int> > vec( row , vector<int> (cols, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++){
            cout<< vec[i][j]<< " ";
        }
        cout<< "\n";
    }

    ///Insert for 2d
    int r;
    int c;
    cout<<"Insert rows and columns: ";
    cin>>r>>c;

    /// Create a vector containing row vectors of size cols.
    vector<vector<int> > twod( r , vector<int> (c));
    cout<<"Insert Values: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
                int data;
                cin>>data;
                twod[i][j]=data;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
                cout<<twod[i][j]<<" ";
        }
        cout<<endl;
    }


}
