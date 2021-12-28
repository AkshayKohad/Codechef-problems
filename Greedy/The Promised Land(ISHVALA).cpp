#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x,y,s;
        cin>>x>>y>>s;
        
        
        vector<int>a,b;
       
        for(int i=0;i<x;i++)
        {
            int val;
            cin>>val;
            a.push_back(val);
        }
        
        for(int i=0;i<y;i++)
        {
            int val;
            cin>>val;
            b.push_back(val);
        }
        
        vector<int>c,d;
        if(a.size()==0)
        {
            c.push_back(n);
        }
        
        else{
            c.push_back(a[0]-0-1);
            for(int i=1;i<x;i++)
            {
                c.push_back(a[i]-a[i-1]-1);
            }
            
            c.push_back(n+1-a[x-1]-1);
        }
        
        if(b.size()==0)
        {
            d.push_back(m);
        }
        
        else{
            d.push_back(b[0]-0-1);
            for(int i=1;i<y;i++)
            {
                d.push_back(b[i]-b[i-1]-1);
            }
            d.push_back(m+1-b[y-1]-1);
        }
        
        long int res=0;
        
        
        // cout<<endl;
        
        // we have to multiply every element of c with that of d and add them, if we do using nested loops it will take O(c.size()*d.size())
      // we can do that in  O(c.size()+d.size())
      // find sum of all elements of both c and d in such a way we will divide them by s(dimension of houses) and then multiply their sums which will give resulting output
        
        // cout<<endl;
       long int rsum=0;
       long int csum=0;
       
        for(int i=0;i<c.size();i++)
        {
            rsum = rsum+(c[i]/s);
        }
        
        for(int i=0;i<d.size();i++)
        {
            csum = csum+(d[i]/s);
        }
        
        res = (rsum)*(csum);
        cout<<res<<endl;
        
    }
	// your code goes here
	return 0;
}
