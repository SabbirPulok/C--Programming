#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main()
{
    vector<int>arr={8,11,3,17,21};

    ///declare iterator to a vector
    vector<int>::iterator ptr;
    cout<<"The vector elements are: ";

    ///Begin() End()
    for(ptr=arr.begin(); ptr<arr.end(); ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

    ///advance()
    ptr=arr.begin();
    advance(ptr,3);
    cout<<"The position of iterator is "<<*ptr<<endl;

    ///next() and prev()
    ptr=arr.begin();
    vector<int>::iterator ftr = arr.end();
    auto itr = next(ptr,3);
    auto itr1 = prev(ftr,3);

    cout<<"The position of new iterator using next() is "<<*itr<<endl;
    cout<<"The position of new iterator using prev() is "<<*itr1<<endl;

    ///insert the elements at any position inserter()
    vector<int>brr={10,20,30};
    ptr=arr.begin();
    advance(ptr,3);
    copy(brr.begin(),brr.end(),inserter(arr,ptr));
    cout<<"The new vector after inserting elements is: ";
    for(int &x:arr)
    {
        cout<<x<<" ";
    }
}
