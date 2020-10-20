#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Sum(int startRange, int diff,int endRange)
    {
        if (endRange > startRange)
        {
            return endRange + Sum(startRange, endRange + diff);

        }

        if (endRange < startRange)
        {
            return startRange + Sum(endRange, startRange + diff);

        }

        return endRange;

    }
int main()
{
    int t,a1,d1,k1,a2,d2,k2;
    int ans;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a1,d1,k1,a2,d2,k2;
        ans=Sum(a1,d1,k1)+Sum(a2,d2,k2);
    }

    return 0;
}
