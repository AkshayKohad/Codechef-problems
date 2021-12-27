#include <bits/stdc++.h>
using namespace std;

int main() {
    
   long long int n,d;
   cin>>n>>d;
   long long int a[n];
   
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    sort(a,a+n);
    
    long long int j=0;
    long long int res=0;
    while(j+1<n && j<n)
    {
        if(a[j+1]-a[j]<=d)
        {
            res++;
            j=j+2;
        }
        
        else{
            j=j+1;
        }
    }
    
    cout<<res;
   
	// your code goes here
	return 0;
}
