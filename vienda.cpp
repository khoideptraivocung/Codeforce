#include <stdio.h>
#include <math.h>

int main(){
    long long n,m,a;
    scanf("%lld %lld %lld", &n, &m,&a);
    // int s1 = n*m;
    // int s2 = a*a;
    // while(s2 != 0){
    //     int temp = s2;
    //     s2 = s1 % s2;
    //     s1 = temp;
    // }
    // printf("%d",s1);
    // return 0;
    long long ceil1 = (n + a - 1) / a;
    long long ceil2 = (m + a -1 ) / a;
    long long da = ceil1*ceil2;
    printf("%lld", da);
    return 0;
}