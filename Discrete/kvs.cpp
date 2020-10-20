#include<bits/stdc++.h>

using namespace std;
#define MAXN 1025

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode  *right;
    TreeNode(int x)
}
vector<int>tree[MAXN];
vector<int>centroidTree[MAXN];
bool centroidMarked[MAXN;

void addEdge(int u, int v)
{
    tree[u].push_back(v);
    tree[v].push_back(u);
}
void DFS(int src, bool visited[],int substree_size[], int* n)
{
    visited[src]= true;
    *n += 1;
    subtree_size[src]=1;
    vector<int>::iterator it;
    for(it=tree[src].begin();it!=tree[src])
}

int main()
{

}
