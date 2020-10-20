#include<iostream>
using namespace std;
template <class T1, class T2>
 void print( T1 a, T2 b)
 {
    cout<<a<<" "<<b<<endl;
 }
 int main()
 {
 print(2,3);
 print(2.3,5);
 print(2.4,"template");
 return 0;
 }
