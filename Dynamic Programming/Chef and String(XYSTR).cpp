#include <bits/stdc++.h>
using namespace std;

int solution(string &s,int n)
{
    if(n==0 ||  n==1)
    return 0;
    
    if((s[n-1]=='x' && s[n-2]=='y')  || (s[n-1]=='y' && s[n-2]=='x'))
    {
        return max(1+solution(s,n-2),solution(s,n-1));
    }
    
    return solution(s,n-1);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       
        string s;
        cin>>s;
        int n = s.length();
        
        //int res = solution(s,n);  // this is recursive solution if we uncomment this 2 lines and comment Tabulation
        //cout<<res<<endl;
    int dp[n+1];
    
    dp[0]=0;
    dp[1]=0;
    
    for(int i=2;i<=n;i++)
    {
        if((s[i-1]=='x' && s[i-2]=='y')  || (s[i-1]=='y' && s[i-2]=='x'))
      {
        dp[i]= max(1+dp[i-2],dp[i-1]);
      }
      
      else
      dp[i] = dp[i-1];
    }
       cout<<dp[n]<<endl; 
    }
	// your code goes here
	return 0;
}
