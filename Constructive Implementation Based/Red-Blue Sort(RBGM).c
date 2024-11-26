#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        
        int permutation[n+1];
        int cnt_correct = 0;
        for(int i=1;i<=n;i++){
            scanf("%d",&permutation[i]);
            
            if(permutation[i]==i)cnt_correct++;
        }
        
        if(cnt_correct==n)printf("%d\n",n);
        else if(cnt_correct==0)printf("%d\n",n-2);
        else printf("%d\n",n-1);
        
    }
}

