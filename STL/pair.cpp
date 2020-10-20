#include<iostream>
#include<utility>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair <string,int> p1;
    pair <string,int> p2(" Subhanallah ",1);
    pair <string,int> p3(p2);
    pair <int,int> p4(5,10);

    p1 = make_pair(string(" Allahu Akbar "), 1);
    p2.first = " Alhamdulillah ";
    p2.second = 1;

    cout << "This is pair p" << p1.second << " with value " << p1.first << "." << endl << endl;

    cout << "This is pair p" << p3.second
        << " with value " << p3.first
        << "This pair was initialized as a copy of "
        << "pair p2" << endl << endl;

    cout << "This is pair g" << p2.second
        << " with value " << p2.first
        << "\nThe values of this pair were changed after initialization."
        << endl << endl;

    cout << "This is pair p4 with values "
        << p4.first << " and " << p4.second
        << " made for showing addition. \nThe sum of the values in this pair is "
        << p4.first+p4.second
        << "." << endl << endl;

    cout << "We can concatenate the values of the pairs p1, p2 and p3 : "
        <<p1.first + p3.first + p2.first << endl << endl;

    cout << "We can also swap pairs (but type of pairs should be same) : " << endl;
    cout << "Before swapping, " << "p1 has " << p1.first
        << " and p2 has " << p2.first << endl;
    swap(p1,p2);
    cout << "After swapping, "
        << "p1 has " << p1.first << " and p2 has " << p2.first;

    return 0;
}
