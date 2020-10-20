#include<iostream>
using namespace std;

class c2cRobot{
    private:
        string pickGet,placePut;
    public:
        c2cRobot(string cmd1,string cmd2)
        {
            pickGet = cmd1;
            placePut = cmd2;
        }
        void Pick()
        {
            int x,y;
            cout<<"Enter Pick Position \nX:";
            cin>>x;
            cout<<"Y:";
            cin>>y;
            cout<<"Cmd: "<<pickGet<<" ("<<x<<", "<<y<<")"<<endl<<endl;
        }
        void Place()
        {
            int x,y;
            cout<<"Enter Place Position \nX:";
            cin>>x;
            cout<<"Y:";
            cin>>y;
            cout<<"Cmd: "<<placePut<<" ("<<x<<", "<<y<<")"<<endl<<endl;
        }
};
int main()
{
    c2cRobot A("PICK","PLACE"), B("GET","PUT");

    while(true)
    {
        int robotNo;
        cout<<"Choose Robot: "<<endl<<"1. Robot A"<<endl<<"2. Robot B "<<endl<<"Type No: ";
        cin>>robotNo;
        switch(robotNo)
        {
        case 1:
            {
                cout<<"Which Operation to perform: "<<endl<<"1. Pick"<<endl<<"2. Place"<<endl<<"Type No: ";
                int opNo;
                cin>>opNo;
                if(opNo==1)
                {
                    A.Pick();
                }
                else if(opNo==2)
                {
                    A.Place();
                }
                break;
            }
        case 2:
            cout<<"Which Operation to perform: "<<endl<<"1. Pick"<<endl<<"2. Place"<<endl<<"Type No: ";
            int opNoo;
            cin>>opNoo;
            if(opNoo==1)
            {
                B.Pick();
            }
            else if(opNoo==2)
            {
                B.Place();
            }
            break;

        default:
            return 0;
        }
    }
    //return 0;
}
