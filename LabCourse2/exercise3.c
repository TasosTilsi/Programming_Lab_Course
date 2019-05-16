#include <stdio.h>
#include <stdlib.h>

int main() {
    //part a)

    int x, y;

    printf(" Specify two integer numbers for x and y\n");
    scanf("%d", &x);
    printf(" \n\nX is: %d\n\n", x);
    scanf("%d", &y);
    printf(" \n\nY is: %d\n\n", y);

    //part b)

    printf(" \n\nThe sum (x+y) is: ");
    printf(" x + y = %d", x + y);

    printf(" \n\nThe multiply (x*y) is: ");
    printf(" x * y = %d", x * y);

    //part c)

    printf(" \n\nThe abs(x) is: %d", abs(x));
    printf(" \n\nThe abs(y) is: %d", abs(y));
    printf(" \n\nThe abs(x+y) is: %d", abs(x + y));
    printf(" \n\nThe abs(x*y) is: %d", abs(x * y));

    printf(" \n\nPress Any Key!!!\n\n");
    getchar();
    return 0;
}