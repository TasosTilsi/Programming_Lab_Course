#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int n,i,j;
    n = 0;
    i = 0;
    j = 0;

    do {
        printf("Give one integer No over or equal to 2:\t");
        scanf("%d", &n);
        if (n < 2) printf("\n\nError!!!\nYou gave wrong No!!!\n\n");
    } while (n < 2);

    float A[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter one float No for the cell A[%d][%d]:\t", i, j);
            scanf("%f", &A[i][j]);
        }

    }
    printf("\n\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n\n");
    }

    float trace = 0, temp;

    for (i = 0; i < n; i++) {
        trace = trace + A[i][i];
    }

    printf("The trace of the array A[%d][%d] is:\t%f\n\n\n", i - 1, j - 1, trace);


    for (j = 0; j < n; j++) {
        temp = A[0][j];
        A[0][j] = A[1][j];
        A[1][j] = temp;
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", A[i][j]);

        }
        printf("\n\n");
    }

    printf("__________________________________________\n\n");

    if (n >= 3) {
        for (i = 0; i < n; i++) {
            temp = A[i][0];
            A[i][0] = A[i][2];
            A[i][2] = temp;
        }


        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("\t%.2f", A[i][j]);

            }
            printf("\n\n");
        }
    }
    printf("\n\n\nPress Any Key!!!\n\n\n");
    getchar();
    return 0;
}