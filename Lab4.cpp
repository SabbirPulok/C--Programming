#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int id,year,sem;
    int mark[5],g[5];
    char grade[5];
    int sum=0;
public:
    double avg;
        void getdata()
    {
        cout<<"Enter student's name:";
       cin>>name;
        cout<<"Enter student's id:";
        cin>>id;
        cout<<"Enter student's year";
        cin>>year;
        cout<<"Enter student's semester"<<endl;
        cin>>sem;
        for(int i=0; i<5; i++)
        {
            cin>>mark[i];
        }
    }
    void calgrade()
    {
        for(int i=0; i<5; i++)
        {
            mark[i]=mark[i]%10;
            if(mark[i]==10)
            {
                grade[i]='P';
                g[i]=6;
                sum+=g[i];
            }
            if(mark[i]==9)
            {
                grade[i]='P';
                g[i]=6;
                sum+=mark[i];
            }
            if(mark[i]==8)
            {
                grade[i]=='A';
                g[i]=5;
                sum+=g[i];
            }
            if(mark[i]==7)
            {
                grade[i]=='B';
                g[i]=4;
                sum+=g[i];
            }
            if(mark[i]==6)
            {
                grade[i]=='C';
                g[i]=3;
                sum+=g[i];
            }
            if(mark[i]==5)
            {
                grade[i]=='D';
                g[i]=2;
                sum+=g[i];
            }
            if(mark[i]<5)
            {
                grade[i]=='F';
                g[i]=0;
                sum+=g[i];
            }
avg=(double)sum/5;
        }

    }
    void showdata()
    {
        cout<<name<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<grade[i];
        }
            cout<<"Average grade point:"<<avg<<endl;
    }
      friend  bool operator>=(const student &x, const student &y)
        {
            return (x.avg>y.avg);
        }
};
int main()
{
    student x,y;
    x.getdata();
    x.calgrade();
    x.showdata();
    y.getdata();
    y.calgrade();
    y.showdata();
    if(x>=y)
        cout<<"1st student is better than 2nd student."<<endl;
    else
        cout<<"2nd student is better than 1st student."<<endl;
    return 0;
}
