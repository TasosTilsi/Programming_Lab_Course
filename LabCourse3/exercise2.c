#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y,z;

    x = 0;
    y = 10;
    printf("\t\n\n\nx = %d    y = %d\n", x, y);

    z = (x > y);
    printf("x > y is %d\n", z);

    z = (x == y);
    printf("x == y is %d\n", z);

    z = (x != y);
    printf("x != y is %d\n", z);

    z = (x && y);
    printf("x && y is %d\n", z);

    z = !(x && y) || (x || y);
    printf("! ( x && y ) || ( x || y ) is %d\n", z);

    x = 10;
    printf("\t\n\n\nx = %d y = %d\n", x, y);

    z = (x > y);
    printf("x > y is %d\n", z);

    z = (x != y);
    printf("x != y is %d\n", z);

    z = (x && y);
    printf("x && y is %d\n", z);

    float f1, f2;
    f1 = 5 / (float) x;
    printf("\n\n5 / (float)%d = %f\n", x, f1);

    f2 = 5.0 / (float) x;
    printf("5.0 / (float) %d = %f\n", x, f2);
    printf("x = %d  NOT(x) = %d\n", x, !x);

    z = 10 + x;
    printf("10 + %d = %d\n", x, z);

    z = 10 + (!x);
    printf("10 + NOT(%d) = %d\n", !x, z);


    printf("\n\n\nPress Any Key!!!\n");
    getchar();
    return 0;
}