#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int ans = 0;
        while(1){
            int aa=0,bb=0,ab=0,ba=0;
            n = s.length();
            for(int i=1;i<n;i++){
                if(s[i]==s[i-1]){
                    if(s[i]=='A'){
                        aa++;
                    }else{
                        bb++;
                    }
                }else{
                    if(s[i]=='A'){
                        ba++;
                    }else{
                        ab++;
                    }
                }
            }
            
            if(ab==0 && ba==0){
                ans += aa+bb+1;
                break;
            }else{
                char prev = s[0];
                string t;
                
                for(int i=1;i<n;i++){
                    if(prev!=s[i]){
                        prev = s[i];
                    }else{
                        t.push_back(s[i]);
                    }
                }
                s = t;
                ans++;
                
                if(s.size()==0)break;
            }
            
        }
        
        cout<<ans<<"\n";
    }
}
