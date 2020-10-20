#include<bits/stdc++.h>
using namespace std;
nstruct node
{
    int roll;
    node *next;
}
node *root=NULL;
void append(int roll)
{
    if(root==NULL)
    {
        root=new node();
        root->roll=roll;
        root->next=NULL;
    }
    else
    {
    node*current_node=root;
    while(current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    node *newnode= new node();
    newnode->roll=roll;
    newnode->next=NULL:

    current_node->next=newnode;
    }
}

int main()
{

}

