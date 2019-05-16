#include <stdio.h>
#include <stdlib.h>

int main() {
    char white;
    printf("Give me a character from your keyboard!!!\t");
    white = getchar();
    getchar();

    while ((white != '\n') && (white != ' ') && (white != '\t')) {
        printf("\n\n\nYou gave me the '%c' character!!!\n\n\n", white);
        printf("Give me a character from your keyboard!!!\t");
        white = getchar();
        getchar();
    }


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();
    return 0;
}