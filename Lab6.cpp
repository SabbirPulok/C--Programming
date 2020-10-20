#include<iostream>
using namesapce std;
class player
{
protected:
int id;
string name;
public:
get data();
avgdata();
show data();
};
class cricket_player:public class player
{
public:
void play_role(){
int num;
cin>>num;
switch(num)
{
case 1:cout<<"batsman"<<endl; break;
case 2:cout<<"bowler"<<endl; break;
case 3:cout<<"all-rounder"<<endl; break;
}
int Total_runs, match_played_total,no_of_not_out_match;
double bat_avg;
get data()
{
    cin>>"Total runs =">>Total_runs>>" Match played total = ">>match_played_total>>" No. of not out match= ">>no_of_not_out_match;
}
}



}
