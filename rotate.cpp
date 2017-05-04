#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<double> rotatearray;
	double number,rotatenumber;
	cin>>number;
	cin>>rotatenumber;
	
//	cout<<number;
//	cout<<rotatenumber;
	int flag=0;
	for(double i=0;i<number;i++)
	{
		rotatearray.push_back(i);
		cin>>rotatearray[i];
		if(rotatenumber==i&&flag==0)
		{
			flag=1;
//			;cout<<"here it is "<<rotatenumber << "it is "<<i;
		}
		if(flag==1)
		{
			cout<<rotatearray[i]<<" ";
		}
		
	}
	
	for(double j=0;j<rotatenumber;j++)
	{
		cout<<rotatearray[j]<<" ";
	}
	return 0;
	
}
