#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int c;
        cin>>c;
        
        long long int a=0;
        long long int b=0;
        
        int d=0;
        while(pow(2,d)<=c)
        d++;
        
      //  cout<<d<<endl;
        
      
        for(int i = d-1;i>=0;i--)
        {
         int bit = (c>>i)&1;
         if(bit==0)
         {
             a=a+pow(2,i);
             b=b+pow(2,i);
             
         }
         
         else{
             if(a<=b)
             {
                 a = a + pow(2,i);
                 
             }
             
             else{
                 b = b + pow(2,i);
                 
             }
             
            // count++;
         }
         
            
        }
        
        cout<<a*b<<endl;
        
        
    // MAX multiplication of a*b is maximum  when differnce between a and b is minimum
        
    }
	// your code goes here
	return 0;
}
