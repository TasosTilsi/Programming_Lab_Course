#include <stdio.h>
#include <stdlib.h>

int main() {
    //part a)

    int x,y;

    printf(" Press a number for x:\n\n");
    scanf("%d", &x);
    printf(" Press a number for y:\n\n");
    scanf("%d", &y);

    //part b)

    printf("\n\n the perimeter of the rectangle you set is:\n\n");
    printf(" (x + y)*2= %d", (x + y) * 2);

    printf("\n\n Press any key!!!\n\n");
    getchar();
    return 0;
}