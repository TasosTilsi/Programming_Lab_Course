#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   
    int done,i=0,sumch=0,strings=0;
    char arr[100];
    printf("\n Write your string, press \"end\" for finish:\t");
    gets(arr);
    printf("\nThe string you wrote is:\t%s", arr);

    if (arr[0] == 'e' && arr[1] == 'n' && arr[2] == 'd') {
        done = 1;
    } else {
        done = 0;
    }


    while (done == 0) {
        strings++;
        sumch = sumch + strlen(arr);
        int peza = 0, kefalaia = 0, akiro = 0;

        for (i = 0; i < strlen(arr); i++) {
            if (arr[i] >= 'a' && arr[i] <= 'z') {
                arr[i] = arr[i] - 32;
                kefalaia++;
            } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] = arr[i] + 32;
                peza++;
            } else {
                akiro++;
            }
        }
        printf("\nAfter Replacement, the string is:\t%s", arr);

        printf("\nThe capital characters are:\t%d", kefalaia);
        printf("\nThe lowercase characters are:\t%d", peza);
        printf("\nYou have %d characters that is not between the limits!!!", akiro);
        printf("\n Write your string, press \"end\" for finish:\t");
        gets(arr);
        printf("\nThe string you wrote is:\t%s", arr);

        if (arr[0] == 'e' && arr[1] == 'n' && arr[2] == 'd') {
            done = 1;
        } else {
            done = 0;
        }
    }

    printf("\n\nYou wrote %d strings with the summary of %d characters!!!", strings, sumch);

    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();

    return 0;
}
