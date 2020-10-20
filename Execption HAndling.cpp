#include<iostream>
using namespace std;

int main()
{
    try{
       cout<<"TRY"<<endl;
        throw 1.5;
    }
    catch(int e)
    {
    cout<<"Catch "<<e<<endl;
    }
    catch(double e)
    {
        cout<<"Catch "<<e<<endl;
    }
    return 0;
}
