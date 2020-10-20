#include<iostream>
using namespace std;
class obj
{
private:
    int id;
    char name[20];
    int year;
    int semester;
    double mark[5];
    char g[5];
    double gp[5];
    double avg;

public:
    void get_mark()
    {
        int i;
        cout<<"Name of the student: ";
        cin>>name;
        cout<<"Id no.: ";
        cin>>id;
        cout<<"Year: ";
        cin>>year;
        cout<<"Semester: ";
        cin>>semester;
        for(i=0; i<5; i++)
        {
            cout<<"Marks: ";
            cin>>mark[i];
        }
        cout<<endl;
    }

    void cal_grade()
    {
        int i,sum=0;
        for(i=0; i<5; i++)
        {
            if(mark[i]>=90 && mark[i]<=100)
            {
                g[i]='P';
                gp[i]=6;
            }
            else  if(mark[i]>=80 && mark[i]<90)
            {
                g[i]='A';
                gp[i]=5;
            }
            else  if(mark[i]>=70 && mark[i]<80)
            {
                g[i]='B';
                gp[i]=4;
            }
            else  if(mark[i]>=60 && mark[i]<70)
            {
                g[i]='C';
                gp[i]=3;
            }
            else  if(mark[i]>=50 && mark[i]<60)
            {
                g[i]='D';
                gp[i]=2;
            }
            else
            {
                g[i]='F';
                gp[i]=0;
            }
        }

        for(i=0; i<5; i++)
        {
            sum=sum+gp[i];
            avg=double(sum)/5;
        }
    }
    void show_grade()
    {
        int i;
        cout<<"Name: "<<name<<endl;
        for(i=0; i<5; i++)
        {
            cout<<i+1<<"th subject mark ="<<mark[i]<<"         ";
            cout<<"Grade= "<<g[i]<<endl;
        }
        cout<<"Grade Point:"<<avg<<endl<<endl;
    }
    friend bool operator>=(const obj &a, const obj &b)
    {
        return(a.avg>=b.avg);
    }
};
int main()
{
    obj a,b;
    a.get_mark();
    a.cal_grade();
    a.show_grade();
    b.get_mark();
    b.cal_grade();
    b.show_grade();
    if(a>=b)
    {
        cout<<"1st student is better than 2nd student on gpa.";
    }
    else
        cout<<"2nd student is better than 1st student on gpa.";
}
