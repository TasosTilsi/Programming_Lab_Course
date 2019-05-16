#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char ch;
    printf("Enter one character: ");
    scanf("%c", &ch);

    switch (ch) {
        case ('K'):
            printf("\n\nYou Win!!!\n\n");
            break;
        case ('E'):
            printf("\n\nYou Lose!!!\n\n");
            break;
        case ('T'):
            printf("\n\nEnd!!!\n\n");
            break;
        default:
            printf("\n\nFalse Choice!!!");
            break;
    }


    printf("\n\n\t\tPress Any Key!!!\n\n");
    getchar();
    return 0;
}