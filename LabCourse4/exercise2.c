#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a,b,c;
    printf("Enter one integer No:");
    scanf("%d", &a);
    printf("\na = %d\n", a);
    printf("\nEnter one integer No:");
    scanf("%d", &b);
    printf("\nb = %d\n", b);
    printf("\nEnter one integer No:");
    scanf("%d", &c);
    printf("\nc = %d\n\n\n", c);

    if (a == b) {
        if (b == c) {
            printf("( a == b == c ) = %d\t Success\n\n", a);
        } else {
            printf("( a == b ) = %d != c = %d\t Almost Success!!!\n\n", a, c);
        }
    } else {
        if (a == c) {
            printf("( a == c ) = %d != b = %d\t Almost Success!!!\n\n", a, b);
        } else {
            if (b == c) {
                printf("( b == c ) = %d != a = %d\t Almost Success!!!\n\n", b, a);
            } else {
                printf("( a = %d ) != ( b = %d ) != ( c = %d )\t Fail!!!\n\n", a, b, c);
            }
        }
    }


    printf("\n\n\t\tPress Any Key!!!\n\n");
    getchar();
    return 0;
}