#include<iostream>
using namespace std;
class area
{
    int length;
    int width;
    public:
    void set(int x,int y)
    {
        length=x;
        width=y;
    }
    int finalarea()
    {
        return length*width;
    }
    friend class cost;
};
class cost
{
    int totcost;
public:

    int printarea(area s)
    {
        cout<<"The area is "<<s.finalarea()<<endl;
    }
    void setcost(int x)
    {
        totcost =x;
    }
    void costing(area s)
    {
     cout<<"Total cost= "<<s.finalarea()*totcost<<endl;
    }
};
int main()
{
    area a;
    a.set(5,5);
    cost c;
    c.printarea(a);
    c.setcost(100);
    c.costing(a);
    return 0;
}
