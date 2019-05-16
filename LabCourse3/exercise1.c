#include <stdio.h>
#include <stdlib.h>

int main() {
    char on, ep;

    printf(" Write the first letter from your name: ");
    on = getchar();
    getchar();

    printf("\n The letter you entered is: ");
    putchar(on);

    printf("\n\n Write the first letter from your surname: ");
    ep = getchar();
    getchar();

    printf("\n The letter you entered is: ");
    putchar(ep);

    printf("\n\n\n\n    Press any key!!!\n");
    getchar();
    return 0;
}