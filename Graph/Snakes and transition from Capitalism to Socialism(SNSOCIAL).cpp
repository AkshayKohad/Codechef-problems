#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>directions = {{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}};



int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    int a[n][m];
	    
	    vector<vector<int>>visited(n,vector<int>(m,INT_MAX));
	    
	    //vector<pair<int,int>>maximum;
	    
	    int maxi = 0;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	            
	            maxi = max(a[i][j],maxi);
	        }
	    }
	    
	      queue<pair<int,int>>q;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(maxi == a[i][j])
	            {
	                q.push({i,j});
	                visited[i][j] = 0;
	                
	            }
	        }
	    }
	    
	    
	   while(q.empty()==false)
	   {
	       pair<int,int>curr = q.front();
	       q.pop();
	       
	       int i = curr.first;
	       int j = curr.second;
	       
	       for(auto k : directions)
	       {
	           int x = i+k.first;
	           int y = j+k.second;
	           
	           if(x<0 || y<0 || x>=n || y>=m || visited[x][y] <= visited[i][j]+1)
	           continue;
	           
	           visited[x][y] = visited[i][j] +1;
	           q.push({x,y});
	       }
	   }
	    
	   
	       
	        
	       
	        int res = 0;
	        
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<m;j++)
	            {
	                res = max(res,visited[i][j]);
	            }
	        }
	        
	        
	       
	        
	        cout<<res<<endl;
	    
	    
	}
	return 0;
}
