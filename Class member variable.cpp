#include<iostream>
#include<iomanip>
using namespace std;
class getaverage
{
    public:
    string id;
    double score[5];
    double cal_avg()
    {
        double avg=0.00;
        for(int i=0; i<5; i++)
        {
            avg+=score[i];
        }
        return (avg/5);
    }
    };
    int main()
    {
        getaverage pulok;
        cout<<"Enter id: ";
        cin>>pulok.id;
        cout<<"\nEnter 5 score: ";
        for(int i=0; i<5; i++)
        {
            cin>>pulok.score[i];
        }
        cout<<fixed;
        cout<<"Average for "<<pulok.id<<" is "<<setprecision(7)<<pulok.cal_avg();

    }
