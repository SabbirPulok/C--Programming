#include<iostream>
using namespace std;
class Sample
{
public:
    Sample()
    {
        cout<<endl<<"Message from Constructor."<<endl;
    }
    ~Sample()
    {
        cout<<endl<<"Message from Destructor."<<endl;
    }
};
void FuncA()
{
    cout<<"Creating sample obj. in FuncA()."<<endl;
    Sample obj;
}
int main()
{
    cout<<"Creating obj. in main()"<<endl;
    Sample obj;
    cout<<"FuncA is calling."<<endl;
    FuncA();
    cout<<"FuncA is called."<<endl;
    return 0;
    }
