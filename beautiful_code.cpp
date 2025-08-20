#include <stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
    int count_odd = 0;
    int count_even = 0;
    if(n<0){
        return 1;
    } else {
        for(long long temp = 0;temp > 0;temp /= 10){
            int digits = temp % 10;
            if(digits % 2 ==0){
                count_even += 1;
            } else {
                count_odd += 1;
            }
        }
    }
    if(count_even == count_odd){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}