#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<string>>a;
    string z;
    //for(int i=0;i<n;i++)
    while(getline(cin,z))
    {
        string s;
        s = s + z;
        z.clear();
        
        vector<string>b;
        string c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]== 39 || s[i]=='.' || s[i]==',' || s[i]==';' || s[i]==':')
            continue;
            
            if(s[i]==' ' && c.length()!=0)
            {
                b.push_back(c);
                c.clear();
            }
            
            else if(s[i]!=39 && s[i]!=44 && s[i]!=46 && s[i]!=58 && s[i]!=59 && s[i]!=32){
                c = c + s[i]; 
            }
        }
        if(c.length()!=0)
        {
            b.push_back(c);
            c.clear();
        }
        a.push_back(b);
    }
    
    
    for(int i=a.size()-1;i>=0;i--)
    {
        for(int j=a[i].size()-1;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
