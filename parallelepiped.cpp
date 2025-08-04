#include <stdio.h>
#include <math.h>
    

int main(){
    long long s1,s2,s3;
    
     scanf("%lld %lld %lld", &s1,&s2,&s3);
    
     long long tong3canh = sqrt(s1*s2*s3);
     long long a = tong3canh / s3;
     long long b= tong3canh / s2;
     long long c = tong3canh / s1;
     long long sum = 4*(a+b+c);
     printf("%lld", sum);
     return 0;
