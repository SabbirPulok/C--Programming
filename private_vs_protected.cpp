#include<iostream>
using namespace std;

class Box{
private:
    int length;
protected:
    int width;
};

class BoxA:Box{
    public:
        void setWidth(int w)
        {
            width =w;
        }
        int getWidth(){
            return width;
        }
        int getLength()
        {
            return 1111111;
            ///return length; Can't Get Access
        }
};

int main()
{
    BoxA box1;
    box1.setWidth(2);
    cout<<"Width: "<<box1.getWidth()<<endl;
    cout<<"Length: "<<box1.getLength()<<endl;
}
