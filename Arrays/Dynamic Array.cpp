#include<iostream>
using namespace std;

int  main()
{
	int s0[150],s1[150];
	int s[150][150];
	int lastAns=0,n,rows;
	int s0index=0;
	int s1index=0,ko;
	cin>>n>>rows;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cin>>s[i][j];
		}
	}

	for(int k=0;k<rows;k++)
	{
		int l=0,ans;
		if(s[k][l]==1)
		{
			l++;
			ans=(s[k][l]^lastAns)%n;
			l++;
			if(ans==0)
			{

				s0[s0index]=s[k][l];
//				cout<<"\n 0th "<<s[k][l];
				s0index++;
			}
			else
			{
				s1[s1index]=s[k][l];
//				cout<<"\n 1st "<<s[k][l];
				s1index++;
			}
		}
		else
		{
			l++;
			ans=(s[k][l]^lastAns)%n;
			l++;
			ko=s[k][l];
			if(ans==0)
			{
//				cout<<"\ index 0 "<<s0[ko];
				cout<<s0[ko]<<"\n";
				lastAns=s0[ko];
			}
			else
			{
//				cout<<"\n index 1 "<<s1[ko];
				cout<<s1[ko]<<"\n";
				lastAns=s1[ko];
			}
		}
	}
	return 0;
}
