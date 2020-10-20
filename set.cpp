#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int s,it;
set< int > s;
    s.insert( 10 ); s.insert( 5 ); s.insert( 9 );

    set< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
}
