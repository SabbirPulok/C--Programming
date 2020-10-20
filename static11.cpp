#include<iostream>
using namespace std;
void fun()
{
    static int a=0;
    int b=0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    fun();
    fun();
    fun();
}
