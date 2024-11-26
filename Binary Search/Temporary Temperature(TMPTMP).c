#include <stdio.h>

int check(int limit,int a[],int k,int n){
    
    int i=0;
    int cnt_change = 0;
    while(i<n){
        int j=i;
        int mini = a[j];
        int maxi = a[j];
        while(j<n){
         mini = mini>a[j] ? a[j]:mini;
         maxi = maxi<a[j] ? a[j]:maxi;
         int val_diff = abs(mini-maxi);
         int res_val = val_diff/2 + val_diff%2;
         if(res_val>limit){
             cnt_change++;
             if(cnt_change>k)return 0;
             break;
         }
         j++;
        
        }
        i=j;
        
    }
    
    return 1;
}

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        int maxi = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            maxi = maxi > a[i] ? maxi:a[i];
        }
        
       int l=0;
       int r=maxi;
       
       int ans = -1;
       while(l<=r){
           int mid = (r-l)/2 + l;
           
           if(check(mid,a,k,n)){
               ans = mid;
               r = mid-1;
           }else{
               l = mid+1;
           }
       }
       
       printf("%d\n",ans);
    }
}

