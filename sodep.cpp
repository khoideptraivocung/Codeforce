#include <stdio.h>
#include <math.h>
int prime(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2;i<= sqrt(n);i++){
        if(n % i ==0){
            return 0;
        }
    }
    return 1;
}
int tong_nt(int n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return prime(tong);
}
int chuso_nt(int n){
    while(n){
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7){
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main(){
    int start, end;
    int dem  = 0;
    scanf("%d %d", &start, &end);
    for(int i = start;i <= end;i++){
        if(prime(i) && tong_nt(i) && chuso_nt(i)){
            ++dem;
        }
    }
    printf("%d", dem);
    return 0;
}