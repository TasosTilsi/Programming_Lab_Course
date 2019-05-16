#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Give me an integer No for n:\t");
    scanf("%d", &n);

    int i, num, sum = 0;

    for (i = 1; i <= n; i = i + 1) {
        printf("Give me an integer No for num:\t");
        scanf("%d", &num);
        sum = sum + num;
    }

    float Overal;

    Overal = sum / (float) n;
    printf("\n\n\nFor sum=%d and n=%d ----> Overal=%f", sum, n, Overal);


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();
    return 0;
}