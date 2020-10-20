#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool status[1100002];
int siv()
{
	int n=10000;
	int sq=sqrt(n);
	for(int i=4;i<=n;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=n;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	siv=true;
	cout<<is prime<<n,siv<<endl;
	siv=false;
	cout<<is  not prime<<n,siv<<endl;
}
