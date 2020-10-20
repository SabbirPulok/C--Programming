#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    int mark;
};
class result: private student
{
    public:
    void get()
    {
        roll=5;
        mark=85;
    }
    void show()
    {
        cout<<roll<<endl<<mark;
    }
};
int main()
{
    result obj;
    obj.get();
    obj.show();
}
