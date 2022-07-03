#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int T;
	cin>>T;
	string s;
	int arr[101];

	
	
	
	for (int i = 1; i <= T; i++)
	{
		cin>>s;
		for (int j = 0; j < s.size(); j++)
		{
			arr[j]= s[j]-'0';
		}
		if (arr[(s.size())-1]%2==0)
		{
			cout<<"even"<<endl;
		}
		else
			cout<<"odd"<<endl;
		
		
	}
	
	
	return 0;
}