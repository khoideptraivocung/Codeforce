#include <stdio.h>

int main(){
    int n, mi, ci;
    int count_1 = 0;
    int count_2 = 0;
    
    // Read the number of rounds
    scanf("%d", &n);
    
    // Loop through each round
    for (int i = 0; i < n; i++) {
        // Read Mishka's and Chris' dice rolls
        scanf("%d %d", &mi, &ci);
        
        // Compare the dice rolls to determine the round winner
        if (mi > ci) {
            count_1++;
        } else if (ci > mi) {
            count_2++;
        }
        // If mi == ci, neither count is updated, which is a tie.
    }
    
    // Determine the overall winner based on the total wins
    if (count_1 > count_2) {
        printf("Mishka\n");
    } else if (count_2 > count_1) {
        printf("Chris\n");
    } else {
        printf("Friendship is magic!^^\n");
    }
    
    return 0;
}