#include<bits/stdc++.h>
using namespace std;
using ll= long long;
ll n,m,c;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(c=-1;n;n/=m,c++)
   c+=n%m;
		cout<<c<<endl;
	}
	return 0;
}