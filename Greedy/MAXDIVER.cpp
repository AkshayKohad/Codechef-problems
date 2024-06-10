
// Solution Approach 
Note that we can change any number to any number in between 1 to 109. And the max size of the array is 105.
That means in the best case, it's always possible to make all elements distinct (obviously when K is sufficiently large).

Let cnti denotes the number of occurrence of i in the array. In the current step, it's always better to change such i which has maximum cnti value.
Because it will add cnti-1 extra value in the current diversity.

Based on these observations we can design our algorithm using a priority queue.

Enumerate cnti structure, where cnti denotes the count of occurrence of i in the array.
In the current step, change the value of number i such that cnti is maximum. Update cnti, i.e., cnti--. Note that we have sufficiently large non-occurred numbers available because the max size of the array is 105, and allowed-change varies from 1 to 109.
Do step 2, for K times. To find max cnti value, maintain a priority queue structure with pairs {cnti, i}. And arranged the priority queue structure with cnti values.
cnti values can be maintained using Map in STL C++.
 
See the solution code.

Time complexity: O(NlogN)
Space complexity: O(N) extra space


#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); \
cout.tie(NULL); \
cin.tie(NULL);

#define ll long long

int main()
{
  ll t;
  cin>>t;

  while(t--)
  {
    ll n,k;
    cin>>n>>k;

    map<ll,ll>mp;

    for(ll i=0;i<n;i++)
    {
        ll val;
        cin>>val;

        mp[val]++;
    }

    ll total_numbers = n;
   
    

    priority_queue<pair<ll,ll>>pq;

    for(auto k:mp)
    {
        pq.push({k.second,k.first});
    }

   
    while(k--)
    {
        pair<ll,ll>cur = pq.top();
        
        
       
        ll cnt = cur.first;
        ll num = cur.second;
         
        // cout<<cnt<<endl; 
        if(cnt<=1) break;

        pq.pop(); 
        cnt--;

        pq.push({cnt,num});
        pq.push({1,-1});
        
    }

    ll ans = 0;

    while(pq.size()>0)
    {
        pair<ll,ll>cur = pq.top();
        
        pq.pop();

        ll cnt = cur.first;
        ll num = cur.second;
       // cout<<cnt<<endl;
        ll net_numbers = total_numbers - cnt;

        ans = ans + cnt*net_numbers;

        total_numbers -= cnt;
    }

    cout<<ans<<"\n";
  }
}
