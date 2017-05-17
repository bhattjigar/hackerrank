#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
//	vector <long> data;
	
	long arrayindex,operationno,max=0,x=0;
	cin>>arrayindex>>operationno;
	long int *data=new long int[arrayindex+1]();
//	data.resize(arrayindex);
	for(long j=0;j<operationno;j++)
	{
		long first,last,addno;
		cin>>first>>last>>addno;		
//		cout<<"\n Your first is "<<first<<"  last is    "<<last<<"  addno  "<<addno;
//		for(long k=first-1;k<=last-1;k++)
//		{
//			cout<<"\n Your Index is "<<k<<"    "<<data[k];
			data[first]+=addno;
			cout<<"\n Your INDEX is "<<first<<" "<<addno;
			
			if((last+1)<=arrayindex) 
			{
				data[last+1]-=addno;
				cout<<"\n Your Upadted INDEX is "<<last+1<<" "<<data[last+1];
			}
//		}
	}
	 for(int i=1;i<=arrayindex;i++)
    {
        x=x+data[i];
        cout<<"\n Your sum Upadted INDEX is "<<x<<" ->"<<data[i];
       if(max<x) 
	   {
	   	max=x;
	   	cout<<"\n MAX "<<max;
	   }


    }
	cout<<max;
//	cout<<*std::max_element(data.begin(), data.end());
	return 0;
}
