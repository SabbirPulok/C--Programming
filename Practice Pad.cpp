#include<iostream>
using namespace std;
class rectangle{
    private:
    int height;
    int width;
    public:
        set(int h,int w);
        int area();
        ~rectangle();
};
inline int rectangle:: area()
    {
        return height*width;
    }
   rectangle::set(int height,int width)
    {
       this->height=height;//point to global variable
        this->width=width;
        cout<<"Constructor"<<endl;
        cout<<area()<<endl;
    }
    rectangle::~rectangle()
    {
        cout<<"Destructor"<<endl;
    }
int main()
{
   rectangle obj;
    //,(5,8),(9,2),(3,5)};
    rectangle *p;
    p=&obj;
    p->set(2,5);

    return 0;
}
