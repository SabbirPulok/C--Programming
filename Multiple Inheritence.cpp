#include<iostream>
using namespace std;

class info
{
    int id;
public:
    void getid()
    {
        cin>>id;
        cout<<id<<endl;
    }
};
class result
{
    int mark;
public:
    void get()
    {
        cin>>mark;
        cout<<mark<<endl;
    }
};
class student:private info,private result
{
public:
    void print()
    {
        get();
        getid();
    }
};
int main()
{
    student ob;
    ob.print();

    return 0;
}
