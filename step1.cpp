#include <stdio.h>
#include <math.h>
int main(){
    long long a,b,s;
    scanf("%lld %lld %lld",&a,&b,&s);
    int distance = abs(a) + abs(b);
    if((s - distance) % 2 == 0 && s >= distance){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
    
}