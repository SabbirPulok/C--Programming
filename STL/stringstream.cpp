#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
using namespace std;
int countWords(string str)
{
    ///Breaking the string into word
    ///clear() — to clear the stream
    ///str() — to get and set string object whose content is present in stream.
    ///operator << — add a string to the stringstream object.
    ///operator >> — read something from the stringstream object,

    stringstream ss(str);
    string words;
    int count=0;
    while(ss>>words)
    {
        count++;
    }
    return count;
}
int printFrequency(string st)
{
    map<string,int>FW;
    stringstream ss(st);
    string word;

    while(ss>>word)
    {
        FW[word]++;
    }
    map<string,int>::iterator it;
    for(it=FW.begin();it!=FW.end();it++)
    {
        cout<<it->first<<"->"<<it->second<<"\n";
    }
}
int main()
{
    string s = "IT Strategy & Management";
    cout<<"No of words in -"<<s<<"- is "<<countWords(s)<<endl;
    string st = "Frequency of of Word Frequency";
    printFrequency(st);
}
