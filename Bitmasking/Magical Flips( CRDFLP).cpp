#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       long long int a[n];
       long long int b[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       
       for(int i=0;i<n;i++)
       {
           cin>>b[i];
       }
       
       int state[n];
       for(int i=0;i<n;i++)
       state[i]=-1;
       
       for(long long int bits = 1<<29;bits>0;bits>>=1)
       {
           bool flag = true;
           for(int i=0;i<n;i++)
           {
               if(state[i]==0 && !(bits&a[i]))
               flag=false;
               
               else if(state[i]==1 && !(bits&b[i]))
               flag=false;
               
               else if(!(bits&a[i]) && !(bits&b[i]))
               flag=false;
           }
           
           if(!flag)
           continue;
           
           for(int i=0;i<n;i++)
           {
               if(state[i]!=-1)
               continue;
               
                if(!(bits&a[i]))
               state[i]=1;
               
               else if(!(bits&b[i]))
               state[i]=0;
           }
       }
       
       long long int res = (1 << 30) -1;
       int flips = 0;
       
       
       for(int i=0;i<n;i++)
       {
           if(state[i]==1)
           {
               flips++;
               res = res & b[i];
           }
           
           else
           res = res & a[i];
       }
       
       
       cout<<res<<" "<<flips<<endl;
       
       
       
    }
	// your code goes here
	return 0;
}
