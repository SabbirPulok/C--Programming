#include<iostream>
using namespace std;
class AdjacencyMatrix
{
private:
    int n;
    int **adj;///<---this line
    bool *visited;///<---this line
public:
    AdjacencyMatrix(int n)
    {
        this->n=n;
        visited=new bool [n];///<---this line
        adj=new int* [n];///<---this line
        for(int i=0; i<n; i++)
        {
            adj[i]=new int[n];
            for(int j=0; j<n; j++)
            {
                adj[i][j]=0;
            }
        }
    }
    void add_edge(int origin,int destination)
    {
        if(origin > n || destination > n || origin<0 || destination<0)
        {
            cout<<"Invalid Edge."<<endl;
        }
        else
        {
            adj[origin-1][destination-1]=1;
        }
    }
    void display()
    {
        int i,j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int nodes,max_edges,origin,destin;
    cout<<"Enter num. of nodes:"<<endl;
    cin>>nodes;
    AdjacencyMatrix mjk(nodes);
    max_edges=nodes*(nodes-1);
    for(int i=0; i<max_edges; i++)
    {
        cout<<"Enter edge (-1 -1 to exit): ";
        cin>>origin>>destin;
        if((origin == -1) && (destin == -1))
            break;
        mjk.add_edge(origin, destin);
    }
    mjk.display();
    return 0;
}
