#include <stdio.h>
#include <stdlib.h>

int main() {
    //part a)

    int year = 1990, month = 1, day = 1;
    float height = 1.90;
    char name = 'A';


    //part b)

    printf(" Birthday: %d/%d/%d\n", day, month, year);
    printf(" Height: %.2f\n", height);
    printf(" First Letter (Name): %c\n", name);


    printf("\n\n\n Press any key\n");
    getchar();
    return 0;
}