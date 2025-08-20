#include <stdio.h>
int main(){
    int d1,d2,d3;
    scanf("%d %d %d", &d1,&d2,&d3);
    int max = d1 + d2 + d3;
    int min;
    if(2*d1 + 2*d2 < max){
        min = max;
    printf("%d",min);
    return 0;
}

}