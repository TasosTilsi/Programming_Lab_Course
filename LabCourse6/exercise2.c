#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    int m = 3;
    n = 4;
    int k = 2;

    float B[m][k], C[k][m], D[m][n];
    int t;
    i = 0;
    j = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            printf("Enter one float No for the B[%d][%d] cell:\t", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    printf("\n\n");

    for (i = 0; i < k; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter one float No for the C[%d][%d] cell:\t", i, j);
            scanf("%f", &C[i][j]);
        }
    }

    printf("\n\n");

    printf("B[%d][%d]=", m, k);

    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            printf("\t%.2f", B[i][j]);
        }
        printf("\n\n\t");
    }

    printf("\n\nC[%d][%d]=", k, n);

    for (i = 0; i < k; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", C[i][j]);
        }
        printf("\n\n\t");
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            D[i][j] = 0;
        }
    }


    printf("\n\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (t = 0; t < k; t++) {
                D[i][j] = D[i][j] + (B[i][t] * C[t][j]);
            }
        }
    }

    printf("\n\nD[%d][%d]=", m, n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", D[i][j]);
        }
        printf("\n\n\t");
    }

    printf("\n\n\nPress Any Key!!!\n\n");
    getchar();

    return 0;
}