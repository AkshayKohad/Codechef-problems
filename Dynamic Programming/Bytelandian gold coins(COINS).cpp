#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n, unordered_map<ll,ll>&m)
{
	if(n<=1)
	return n;

	if(m.find(n)!=m.end())
	return m[n];


	m[n] = max(n,solve(n/2,m)+solve(n/3,m)+solve(n/4,m));

	return m[n];
}

int main() {
	ll n;
	cin>>n;

	unordered_map<ll,ll>m;

    if(n>0)
	cout<<solve(n,m);

	else{
		cout<<"0";
	}
	return 0;
}
