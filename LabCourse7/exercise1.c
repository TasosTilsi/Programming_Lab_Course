#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   
    //part 1)

    char A[3][41],str[41];
    int i,j;

    for (i = 0; i < 3; i++) {
        if (i == 0) printf("Enter the %dst introduction:   ", i + 1);
        if (i == 1) printf("Enter the %dnd introduction:   ", i + 1);
        if (i == 2) printf("Enter the %drd introduction:   ", i + 1);
        gets(str);

        for (j = 0; j < 41; j++) {
            A[i][j] = str[j];
        }
    }

    for (i = 0; i < 3; i++) {
        printf("\n%s", A[i]);
    }

    // part 2)

    printf("\n\n\n");

    char tmp[41];
    //temp[41];

    if (strcmp(A[0], A[1]) == -1) {
        strcpy(tmp, A[1]);
        strcpy(A[1], A[0]);
        strcpy(A[0], tmp);
    }

    for (i = 0; i < 3; i++) {
        printf("\n%s", A[i]);
    }


    // part 3)

    printf("\n\n\n");

    int count, mikos;

    for (j = 0; j < 3; j++) {
        if (strchr(A[j], ' ')) {
            strcpy(tmp, "0");
            i = 0;
            count = 0;
            while ((A[j][i] != ' ') && (A[j][i]) != '\0') {
                count++;
                i++;
            }
            count++;
            strncpy(tmp, A[j], count);
            if (j == 0) printf("\n\tCharacters from the beginning untill the %dst gap: ", j + 1);
            if (j == 1) printf("\n\tCharacters from the beginning untill the %dcd gap: ", j + 1);
            if (j == 2) printf("\n\tCharacters from the beginning untill the %drd gap: ", j + 1);
            printf("%s", tmp);

        }
    }

    printf("\n\n");

    for (j = 0; j < 3; j++) {
        i = 0;
        count = 0;
        mikos = strlen(A[j]);
        while ((A[j][i] != ' ') && (A[j][i]) != '\0') {
            count++;
            i++;
        }
        if (strchr(A[j], ' ')) {
            for (i = 0; i < (mikos - count); i++) {
                A[j][i] = A[j][i + count + 1];
            }
            if (j == 0) printf("\n\tCharacters from the %dst gap untill the end: ", j + 1);
            if (j == 1) printf("\n\tCharacters from the %dcd gap untill the end: ", j + 1);
            if (j == 2) printf("\n\tCharacters from the %drd gap untill the end: ", j + 1);
            printf("%s", A[j]);
        }
    }

    printf("\n\n\n");

    int ipol;

    if (strlen(A[0]) > 3 && strlen(A[1]) > 3 && strlen(A[2]) > 3) {
        for (j = 0; j < 3; j++) {
            count = strlen(A[j]);
            ipol = count - 4;
            for (i = 0; i < 5; i++) {
                A[j][i] = A[j][i + ipol];
            }
            A[j][4] = '\0';
        }
        if (strcmp(A[0], A[1]) == 0 && strcmp(A[0], A[2]) == 0 && strcmp(A[1], A[2]) == 0) {
            printf("\t--> %s\n", A[0]);
            printf("\t--> %s\n", A[1]);
            printf("\t--> %s", A[2]);
        } else printf("\n\tThe last 4 characters are not the same!");
    } else printf("One or more strings has not enough characters!");


    printf("\n\n\n\t\tPress Any Key!!!\n\n\n");
    getchar();

    return 0;
}
