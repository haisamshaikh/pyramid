#include <stdio.h>

int main() {
    int row, space, star;
    for(row = 5; row >= 1; row--) {
        for(int col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
