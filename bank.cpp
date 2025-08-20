#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long count = 0;
    long long du = 0;
    count += n / 100;
     n %= 100;

    count += n / 20;
    n %= 20;

    count += n / 10;
     n %= 10;

    count += n / 5;
     n %= 5;

    count += n / 1;
    n %= 1;

    count+=n;
    printf("%lld", count);
    return 0;
}