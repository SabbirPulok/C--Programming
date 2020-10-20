#include<bits/stdc++.h>
using namespace std;

int fibb(int n)
{
    if(n==0)
        return 0;
    if(n==1)
            return 1;

    return fibb(n-1)+fibb(n-2);
}
int main()
{
    //freopen("arr.txt","r",stdin);
    //freopen("arr3.txt","w",stdout);
    int n;
    double step;
    cout<<"How many number?"<<endl;
    cin>>n;
    cout <<"The "<<n<<" th number of this series: "<<fibb(n-1)<<endl;
    step=pow(2,n-1)-1;
    cout<< "The number of step taken "<<step<<endl;

    return 0;

}
