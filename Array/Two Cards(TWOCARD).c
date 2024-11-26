#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        
        int alice_choice_ind = -1;
        int max_val = 0;
        int max_val_a = 0;
        for(int i=0;i<n;i++){
            int temp_max = a[i]>=b[i] ? a[i]:b[i];
            
            if(temp_max>max_val){
                max_val = temp_max;
                max_val_a = a[i];
                alice_choice_ind = i;
            }else if(temp_max==max_val){
                if(max_val_a<a[i]){
                    max_val_a = a[i];
                    alice_choice_ind = i;
                }
                
            }
        }
        
        int bob_choice_ind = -1;
        int max_val_bob = 0;
        
        for(int i=0;i<n;i++){
            if(alice_choice_ind==i)continue;
            if(max_val_bob<a[i]){
                max_val_bob = a[i];
                bob_choice_ind = i;
            }
        }
        
        int res_bob_val = a[bob_choice_ind]>b[bob_choice_ind] ? a[bob_choice_ind]:b[bob_choice_ind];
        
        if(res_bob_val>=max_val)printf("NO\n");
        else printf("YES\n");
        
        
    }
}

