#include <bits/stdc++.h>
using namespace std;

int countbits(long long int k)
{
     int count=0;
           
             for(int i=31;i>=0;i--)
                {
                    int bit = (k>>i)&1;
                    if(bit==1)
                    count++;
                }
                return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int nbits[n];
        long long int a[n];
         int counte=0;
                int counto=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           
                nbits[i]=countbits(a[i]);
                if(nbits[i]%2==1)
                counto++;
                
                else
                counte++;
        }
        
    
        for(int i=0;i<q;i++)
        {
           long long int p;
            cin>>p;
            
        int count = countbits(p);
            
            if(count%2==1)
            cout<<counto<<" "<<counte<<endl;
            
            else
             cout<<counte<<" "<<counto<<endl;
            
        }
    }
	// your code goes here
	return 0;
}
