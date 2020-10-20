#include<iostream>
using namespace std;
class student
{
private:
    int id;
    char name[20];
    int year;
    int semester;
    float mark[5];
    char lg[5];
    float gp[5];
    float gpa;

public:
    void get_mark()
    {
        int i;
        cout<<"ENTER ID:";
        cin>>id;
        cout<<"ENTER NAME:";
        cin>>name;
        cout<<"ENTER YEAR:";
        cin>>year;
        cout<<"ENTER SEMESTER:";
        cin>>semester;
        for(i=0; i<5; i++)
        {
            cout<<"ENTER MARKS:";
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
                lg[i]='P';
                gp[i]=6;
            }
            else  if(mark[i]>=80 && mark[i]<90)
            {
                lg[i]='A';
                gp[i]=5;
            }
            else  if(mark[i]>=70 && mark[i]<80)
            {
                lg[i]='B';
                gp[i]=4;
            }
            else  if(mark[i]>=60 && mark[i]<70)
            {
                lg[i]='C';
                gp[i]=3;
            }
            else  if(mark[i]>=50 && mark[i]<60)
            {
                lg[i]='D';
                gp[i]=2;
            }
            else
            {
                lg[i]='F';
                gp[i]=0;
            }
        }

        for(i=0; i<5; i++)
        {
            sum=sum+gp[i];
            gpa=float(sum)/5;
        }
    }
    void show_grade()
    {
        int i;
        cout<<"NAME:"<<name<<endl;
        for(i=0; i<5; i++)
        {
            cout<<"MARKS="<<mark[i];
            cout<<"  LETTER GRADE="<<lg[i]<<endl;
        }
        cout<<"GPA:"<<gpa<<endl<<endl;
    }
    friend bool operator>=(const student &a, const student &b)
    {
        return(a.gpa>=b.gpa);
    }

};
int main()
{
    student a,b;
    a.get_mark();
    a.cal_grade();
    a.show_grade();
    b.get_mark();
    b.cal_grade();
    b.show_grade();
    if(a>=b)
    {
        cout<<"a is greater";
    }
    else
        cout<<"b is better";
}
