#include <stdio.h>
#include <stdlib.h>

#define My_Zero 1E-6

int main() {
    int a, b, c;
    printf("Enter one integer No:");
    scanf("%d", &a);
    printf("\na = %d\n", a);
    printf("\nEnter one integer No:");
    scanf("%d", &b);
    printf("\nb = %d\n", b);
    printf("\nEnter one integer No:");
    scanf("%d", &c);
    printf("\nc = %d\n\n\n", c);

    int z;
    if (abs(c) > My_Zero) {
        z = (a + b) / c;
        printf("z = ( %d + %d ) / %d = %d\n\n", a, b, c, z);
    } else {
        printf("\n\n%d == %f\n\n", c, My_Zero);
        printf("\n\nThe programme ends\n\n");
    }


    printf("\n\n\t\tPress Any Key!!!\n\n");
    getchar();
    return 0;
}