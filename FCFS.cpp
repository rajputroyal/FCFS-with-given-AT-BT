#include<iostream>
using namespace std;
int main()
{   int n;
	cout<<"enter no. of processes\n";
	cin>>n;
	int AT[n],ET[n];
	cout<<"enter arrival time for processes\n";
	for(int i=0;i<=n-1;i++)
	{
			cin>>AT[i];
	}
	cout<<"enter execution time for processes\n";
	for(int i=0;i<=n-1;i++)
	{
			cin>>ET[i];
	}
	int CT[n],TAT[n],WT[n];
	for(int i=0;i<=n-1;i++)
	{   
	    if(i==0)
		CT[i]=ET[i]-AT[i];
		else if(CT[i-1]>AT[i])
		CT[i]=CT[i-1]+ET[i];
		else
		CT[i]=AT[i]+ET[i];
		TAT[i]=CT[i]-AT[i];
		WT[i]=TAT[i]-ET[i];
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<"CT["<<i<<"]="<<CT[i]<<"\n";
		cout<<"TAT["<<i<<"]="<<TAT[i]<<"\n";
		cout<<"WT["<<i<<"]="<<WT[i]<<"\n";
		
	}
}
