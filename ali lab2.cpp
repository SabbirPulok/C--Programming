#include<iostream>
using namespace std;
class desco
{
    string name;
    int unit;
    double bill;
public:
    void customer()
    {
        cin>>name;
        cin>>unit;
    }
    void month_bill()
    {
        if(unit%100!=0)
        {
            if(unit%300!=0)
            {
                bill=unit*5.36+45;
                bill+=bill*0.05;
            }
            else
            {
                bill=unit*8.70+45;
                bill+=bill*0.05;
            }
        }
        else
        {
            bill=unit*5.14+45;
            bill+=bill*0.05;
        }
        if(bill>400)
        {
            bill+=bill*0.15;
        }
        if(bill<100)
        {
            bill=100;
        }
        cout<<name<<" :Electric bill for this month "<<bill<<"tk"<<endl;
    }
};
int main()
{
    class desco obj[1000];
    int n;
    cout<<"No. of account:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        obj[i].customer();
        obj[i].month_bill();
    }
}
