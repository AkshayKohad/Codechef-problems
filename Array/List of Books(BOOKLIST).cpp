#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin>>m;
    vector<int>a;
    
   
    for(int i=0;i<m;i++)
    {
        int z;
        cin>>z;
        a.push_back(z);
        
    }
    
    
    int n;
    cin>>n;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        k=k-1;
        if(k<a.size())
        {
        b.push_back(a[k]);
        a.erase(a.begin()+k);
        }
    }
    
    for(int i=0;i<b.size();i++)
    cout<<b[i]<<endl;
    
   
	// your code goes here
	return 0;
}
