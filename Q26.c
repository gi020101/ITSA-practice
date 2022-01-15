#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
int cmp(const void *a, const void *b){
    const ll* arr1 = (const ll*)a;
    const ll* arr2 = (const ll*)b;
    if(arr1[1] == arr2[1]){
        return arr1[0] - arr2[0];
    }else{
        return arr1[1] - arr2[1];
    }
}
int main(){
    ll n;
    scanf("%lld", &n);
    ll num[n][2];
    for(ll i = 0;i < n;i++){
        scanf("%lld", &num[i][0]);
        num[i][1] = 0;
    }
    for(ll i = 0;i < n;i++){
        ll count = num[i][0];
        while(count != 0){
            num[i][1] += count%10;
            count /= 10;
        }
    }
    qsort(num, n, 2*sizeof(ll), cmp);
    for(ll i = 0;i < n;i++){
        printf("%lld", num[i][0]);
        if(i < n-1){
            printf(" ");
        }else{
            printf("\n");
        }
    }

    return 0;
}