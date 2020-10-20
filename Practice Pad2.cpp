#include<iostream>
using namespace std;
class rectangle;
class cost{
    int costrate;
public:
    void setvalue()
    {

        cout<<"Costrate :";
        cin>>costrate;
    }
  int totalcost(rectangle A);
   };

class rectangle{
    int height;
    int width;
    static int count;
    public:
        set(int h,int w);
        int area();
        static void counttheclass()
        {
           cout<<"count the obj "<<++count<<endl;
        };
        ~rectangle();
        friend int cost::totalcost(rectangle A);
};
inline int rectangle:: area()
    {
        return height*width;
    }
   int rectangle::set(int h,int w)
    {
        height=h;
        width=w;
        cout<<"Constructor"<<endl;
        cout<<area()<<endl;
    }
    rectangle::~rectangle()
    {
        cout<<"Destructor"<<endl;
    }
    rectangle scan()
    {
    int h,w;
    cin>>h>>w;
    rectangle ob;
    ob.set(h,w);
    return ob;
    }
   void print(rectangle a)
   {
      cout<<"The Area is "<<a.area()<<endl;
   }
inline int cost::totalcost(rectangle A)
  {
      return costrate*A.height*A.width;
  }
  int rectangle::count;
int main()
{
   rectangle obj,obj1;
   obj=scan();
   print(obj);
   obj.counttheclass();

   obj1=scan();
   print(obj1);
   obj1.counttheclass();

   cost c;
   c.setvalue();
   cout<<c.totalcost(obj)<<endl;
   cout<<c.totalcost(obj1)<<endl;
    return 0;
}
