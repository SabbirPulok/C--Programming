#include<iostream>
using namespace std;
class box
{
public:
double length;
double width;
double height;
};
int main()
{
box box1,box2;
double volume=0.0;
cin>>box1.length>>box1.height>>box1.width;
cin>>box2.length>>box2.height>>box2.width;
volume=box1.length*box1.width*box1.height;
cout<<volume<<endl;
volume=box2.length*box2.width*box2.height;
cout<<volume<<endl;
}
