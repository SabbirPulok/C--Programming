#include<iostream>
using namespace std;
int main()
{
int *ptr;
int a;
/*int a;
ptr=&a;
Dynamic Memory Allocate
*/
cin>>a;
ptr=new int (a);

cout<<*ptr<<endl;
delete (ptr);
cin>>a;
cout<<*ptr<<endl;//show garbage value
return 0;
}
