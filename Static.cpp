#include<iostream>
using namespace std;
class sample{
    static int x,y;
public:
    void setxy(int a, int b)
    {
    x=a;
    y=b;
    }
    void printxy()
    {
    cout<<"X= "<<x<<endl<<"Y= "<<y<<endl;
    }
};
int sample::x;
int sample::y;
int main()
{
sample s1,s2,s3;
s1.setxy(100,200);
s1.printxy();
s2.printxy();
s3.printxy();
}
