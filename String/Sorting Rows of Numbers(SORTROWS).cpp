#include <bits/stdc++.h>
using namespace std;

bool mycmp(string &a, string &b)
{
    int k;
    if(a.length()>b.length())
    k = b.length();
    
    else
    k = a.length();
    
    for(int i=0;i<k;i++)
    {
        if(a[i]==b[i])
        continue;
        
        return a[i]<b[i];
    }
    
    return a.length()<b.length();
}

int main() {
    int n;
    cin>>n;
    vector<string>a;
    string z;
    while(getline(cin,z))
    {
        string s;
        s = s+z;
        string k;
        for(int i=0;i<s.length();)
        {
           if(s[i]=='-' && s[i+1]=='1')
           i=i+2;
           
           else
           {
            k = k + s[i];
            i++;
           }
        }
        a.push_back(k);
    }
    
    sort(a.begin(),a.end(),mycmp);
    
    for(int i=1;i<a.size();i++)
    cout<<a[i]<<endl;
	// your code goes here
	return 0;
}
