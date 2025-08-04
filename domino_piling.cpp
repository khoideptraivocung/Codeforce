 #include <stdio.h>
#include <math.h>
int main(){
      


    int M,N;
    scanf("%d %d", &M, &N);
    int S = M*N;
    int n;
    int dmn = 2;
    if(S % dmn ==0){
        n = S / dmn;
    } else {
        n = (S-1) / dmn;
    }
    printf("%d",n);
    return 0;
}
