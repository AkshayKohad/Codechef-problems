#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        string s;
        cin>>s;
        
        ll i=0;
        
        vector<ll>cnt_0;
        vector<ll>cnt_1;
        
        while(i<n)
        {
            ll j=i;
            ll cnt=0;
            while(j<n && s[i]==s[j])
            {
                cnt++;
                j++;
            }
            
            if(s[i]=='0')
            {
                cnt_0.push_back(cnt);
            }
            else{
                cnt_1.push_back(cnt);
            }
            
            i=j;
        }
        
       
        
        ll cnt_1_size = cnt_1.size();
        ll cnt_0_size = cnt_0.size();
        
        if(cnt_0_size==0)
        {
            cout<<"0\n";
            continue;
        }
        
        if(cnt_0_size==cnt_1_size)
        {
            cout<<"1\n";
            continue;
        }
        
        else if(cnt_1_size>cnt_0_size)
        {
            cout<<"0\n";
            continue;
        }
        
        else{
            
            if(cnt_0_size==1 && cnt_0[0]==1)
            cout<<"1\n";
            
            else
            cout<<"2\n";
            continue;
        }
    }
    
	// your code goes here

}
