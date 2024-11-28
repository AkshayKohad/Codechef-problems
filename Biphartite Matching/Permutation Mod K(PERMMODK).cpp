#include <bits/stdc++.h>
using namespace std;

bool dfs(int src,vector<int>adj[],vector<int>&visited,vector<int>&position){
    
    for(auto u : adj[src]){
        if(visited[u])continue;
        visited[u] = 1;
        if(position[u] == -1 || dfs(position[u],adj,visited,position)){
            position[u] = src;
            return true;
        }
    }
    
    return false;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        if(k==1){
            cout<<"-1\n";
            continue;
        }
        vector<int>adj[n+1];
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int val = i%k;
                int val2 = j%k;
                
                if(val!=val2){
                    adj[i].push_back(j);
                }
            }
        }
        
        
        vector<int>position(n+1,-1);
        int res_pos = 0;
        for(int i=1;i<=n;i++){
            vector<int>visited(n+1,0);
            bool res = dfs(i,adj,visited,position);
            
            if(res){
                res_pos++;
            }
        }
        
        if(res_pos!=n){
            cout<<"-1\n";
            continue;
        }
        
        
        vector<int>result(n+1,0);
        for(int i=1;i<=n;i++){
            
            int val = position[i];
            if(position[i]!=-1){
                result[val] = i;
            }
        }
        
        vector<int>used_val(n+1,0);
        bool ispossible = true;
        for(int i=1;i<=n;i++){
            int res_val = result[i];
            if(res_val==0 || used_val[res_val]){
                ispossible=false;
                break;
            }
            used_val[res_val] = 1;
            
            if(res_val%k == i%k){
                ispossible=false;
                break;
            }
        }
        
        if(!ispossible){
            cout<<"-1\n";
        }else{
            for(int i=1;i<=n;i++){
                cout<<result[i]<<" ";
            }
            cout<<endl;
        }
        
        
        
    }
}
