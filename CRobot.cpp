#include<iostream>

using namespace std;

class CRobot{
    protected:
        string pickGet, placePut;
    public:
        virtual void Pick(){};
        virtual void Place(){};
        void print(string cmd)
        {
            int x,y;
            cout<<"Enter "<<cmd<<" Position \nX:";
            cin>>x;
            cout<<"Y:";
            cin>>y;
            cout<<"CMD: "<<cmd<<" ("<<x<<", "<<y<<")"<<endl<<endl;
        }
};

class RobotA: public CRobot{
    public:
      RobotA(string cmd1, string cmd2)
      {
          pickGet = cmd1;
          placePut = cmd2;
      }
      void Pick()
      {
        print(pickGet);
      }
      void Place()
      {
          print(placePut);
      }
};

int main()
{
    CRobot* robot;
    while(true)
    {
        int robotNo;
        cout<<"Choose Robot: "<<endl<<"1. Robot A"<<endl<<"2. Robot B "<<endl<<"Type No: ";
        cin>>robotNo;
        switch(robotNo)
        {
            case 1:
                {
                    robot = new RobotA("PICK","PLACE"); break;
                }
            case 2:
                {
                    robot = new RobotA("GET","PUT"); break;
                }
            default: { return 0; }
        }

        robot->Pick();
        robot->Place();

    }
}
