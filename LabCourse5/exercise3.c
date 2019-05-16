#include <stdio.h>
#include <stdlib.h>

int main() {
    int j, i;
    for (i = 0; i <= 10; i++) {
        for (j = i; j <= 10; j++) {
            printf("%d\t *\t %d\t =\t %d \n\n", i, j, i * j);
        }
        printf("\n-------\n");
    }


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();
    return 0;
}