#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
  
    if(n<0){
        return 1;
    }
    long long sum_of_digits_odd = 0;
    long long sum_of_digits_even = 0;
    if (n == 0) {
        sum_of_digits_even = 0;
        sum_of_digits_odd = 0;
    } else {
        for (long long temp_n = n; temp_n > 0; temp_n /= 10) {
            int digit = temp_n % 10;
            if(digit % 2 == 0){
                sum_of_digits_even += digit;
            } else {
                sum_of_digits_odd += digit;
            }
        }
    }
    printf("%lld %lld", sum_of_digits_even,sum_of_digits_odd);
    return 0;
}    
