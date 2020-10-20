#include <iostream>

using namespace std;

void quickSort(int *,int,int);

int partition(int *, int,int);

int main()
{
    int A[10]={6,10,13,5,8,3,2,25,4,11};
    int p=0,q=10;

    cout<<"Before Sorting"<<endl;
    for(int f=0; f<10; f++)
        cout<<A[f]<<endl;

    quickSort(A,p,q);

    cout<<"After Sorting"<<endl;
    for(int f=0; f<10; f++)
        cout<<A[f]<<endl;
}


void quickSort(int *A, int p,int q)
{
    int r;
    if(p<q)
    {
        r=partition(A, p,q);
        quickSort(A,p,(r-1));
        quickSort(A,(r+1),q);
    }
}


int partition(int *A, int p,int q)
{
    int x= A[p];
    int i=p;
    int temp;
    int j;

    for(j=p+1; j<q; j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            temp= A[j];
            A[j]=A[i];
            A[i]=temp;
        }

    }

    temp= A[p];
    A[p]=A[i];
    A[i]=temp;

    return i;
}
