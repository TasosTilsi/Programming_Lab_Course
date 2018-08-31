#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define My_Zero 1E-6

int main() {
    /*--------------- Lab Course 1 -----------------------*/

    //--------------- exercise 1 -----------------------//
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("^\t My name is Anastasios Tilsizoglou           ^\n");
    printf("^\t I study at the Det. of Computer Engineering ^\n");
    printf("^\t Tech. Educ. Inst. of Central Macedonia      ^\n");
    printf("^\t    Record No: I don't have yet              ^\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    printf("Press any key to continue!!!\n");
    getchar();

    /*--------------- Lab Course 2 -----------------------*/

    //--------------- exercise 1 -----------------------//

    //part a)

    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");

    //part b)

    printf("\n\n213432 + 3434 = %d\n", 213432 + 3434);


    printf("\n\nPress any key\n");
    getchar();

    //--------------- exercise 2 -----------------------//

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

    //--------------- exercise 3 -----------------------//


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

    //--------------- exercise 3 -----------------------//

    //part a)

    //int x,y;

    printf(" Press a number for x:\n\n");
    scanf("%d", &x);
    printf(" Press a number for y:\n\n");
    scanf("%d", &y);

    //part b)

    printf("\n\n the perimeter of the rectangle you set is:\n\n");
    printf(" (x + y)*2= %d", (x + y) * 2);

    printf("\n\n Press any key!!!\n\n");
    getchar();

    /*--------------- Lab Course 3 -----------------------*/

    //--------------- exercise 1 -----------------------//

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

    //--------------- exercise 2 -----------------------//

    int z; // x,y,z;

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

    /*--------------- Lab Course 4 -----------------------*/

    //--------------- exercise 1 -----------------------//

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

    //int z;
    if (abs(c) > My_Zero) {
        z = (a + b) / c;
        printf("z = ( %d + %d ) / %d = %d\n\n", a, b, c, z);
    } else {
        printf("\n\nc == My_Zero\n\n", c, My_Zero);
        printf("\n\nThe programme ends\n\n");
    }


    printf("\n\n\t\tPress Any Key!!!\n\n");
    getchar();

    //--------------- exercise 2 -----------------------//

    //int a,b,c;
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

    //--------------- exercise 3 -----------------------//

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

    /*--------------- Lab Course 5 -----------------------*/

    //--------------- exercise 1 -----------------------//

    int n;
    printf("Give me an integer No for n:\t");
    scanf("%d", &n);

    int i, num, sum = 0;

    for (i = 1; i <= n; i = i + 1) {
        printf("Give me an integer No for num:\t");
        scanf("%d", &num);
        sum = sum + num;
    }

    float Overal;

    Overal = sum / (float) n;
    printf("\n\n\nFor sum=%d and n=%d ----> Overal=%f", sum, n, Overal);


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();

    //--------------- exercise 2a -----------------------//

    //int n;
    printf("Give me an integer No for n:\t");
    scanf("%d", &n);

    //int i=1,num,sum=0;
    i = 1;
    sum = 0;

    while (i <= n) {
        printf("Give me an integer No for num:\t");
        scanf("%d", &num);
        sum = sum + num;
        i = i + 1;
    }

    //float Overal;

    Overal = sum / (float) n;
    printf("\n\n\nFor sum=%d and n=%d ----> Overal=%f", sum, n, Overal);


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();

    //--------------- exercise 2b -----------------------//

    //int n;
    printf("Give me an integer No for n:\t");
    scanf("%d", &n);

    //int i=1,num,sum=0;
    i = 1;
    sum = 0;

    do {
        printf("Give me an integer No for num:\t");
        scanf("%d", &num);
        sum = sum + num;
        i = i + 1;
    } while (i <= n);

    //float Overal;

    Overal = sum / (float) n;
    printf("\n\n\nFor sum=%d and n=%d ----> Overal=%f", sum, n, Overal);


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();

    //--------------- exercise 3 -----------------------//

    int j;//, i;
    for (i = 0; i <= 10; i++) {
        for (j = i; j <= 10; j++) {
            printf("%d\t *\t %d\t =\t %d \n\n", i, j, i * j);
        }
        printf("\n-------\n");
    }


    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();

    //--------------- exercise 4a -----------------------//

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

    printf("\n\n\nYou gave me the '%c' character!!!\n\n\n", white);

    printf("\n\n\n Press Any Key!!!\n\n\n");
    getchar();

    //--------------- exercise 4b -----------------------//

    //char white;
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

    /*--------------- Lab Course 6 -----------------------*/

    //--------------- exercise 1 -----------------------//

    //int n,i,j;
    n = 0;
    i = 0;
    j = 0;

    do {
        printf("Give one integer No over or equal to 2:\t");
        scanf("%d", &n);
        if (n < 2) printf("\n\nError!!!\nYou gave wrong No!!!\n\n");
    } while (n < 2);

    float A[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter one float No for the cell A[%d][%d]:\t", i, j);
            scanf("%f", &A[i][j]);
        }

    }
    printf("\n\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n\n");
    }

    float trace = 0, temp;

    for (i = 0; i < n; i++) {
        trace = trace + A[i][i];
    }

    printf("The trace of the array A[%d][%d] is:\t%f\n\n\n", i - 1, j - 1, trace);


    for (j = 0; j < n; j++) {
        temp = A[0][j];
        A[0][j] = A[1][j];
        A[1][j] = temp;
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", A[i][j]);

        }
        printf("\n\n");
    }

    printf("__________________________________________\n\n");

    if (n >= 3) {
        for (i = 0; i < n; i++) {
            temp = A[i][0];
            A[i][0] = A[i][2];
            A[i][2] = temp;
        }


        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("\t%.2f", A[i][j]);

            }
            printf("\n\n");
        }
    }
    printf("\n\n\nPress Any Key!!!\n\n\n");
    getchar();

    //--------------- exercise 3 -----------------------//
    int m = 3;
    n = 4;
    int k = 2;

    float B[m][k], C[k][m], D[m][n];
    int t;
    i = 0;
    j = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            printf("Enter one float No for the B[%d][%d] cell:\t", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    printf("\n\n");

    for (i = 0; i < k; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter one float No for the C[%d][%d] cell:\t", i, j);
            scanf("%f", &C[i][j]);
        }
    }

    printf("\n\n");

    printf("B[%d][%d]=", m, k);

    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            printf("\t%.2f", B[i][j]);
        }
        printf("\n\n\t");
    }

    printf("\n\nC[%d][%d]=", k, n);

    for (i = 0; i < k; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", C[i][j]);
        }
        printf("\n\n\t");
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            D[i][j] = 0;
        }
    }


    printf("\n\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (t = 0; t < k; t++) {
                D[i][j] = D[i][j] + (B[i][t] * C[t][j]);
            }
        }
    }

    printf("\n\nD[%d][%d]=", m, n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.2f", D[i][j]);
        }
        printf("\n\n\t");
    }

    printf("\n\n\nPress Any Key!!!\n\n");
    getchar();

    /*--------------- Lab Course 7 -----------------------*/

    //--------------- exercise 1 -----------------------//

    //part 1)

    //char A[3][41],str[41];
    char str[41];
    A[3][41];
    //int i,j;

    for (i = 0; i < 3; i++) {
        if (i == 0) printf("Enter the %dst introduction:   ", i + 1);
        if (i == 1) printf("Enter the %dnd introduction:   ", i + 1);
        if (i == 2) printf("Enter the %drd introduction:   ", i + 1);
        gets(str);

        for (j = 0; j < 41; j++) {
            A[i][j] = str[j];
        }
    }

    for (i = 0; i < 3; i++) {
        printf("\n%s", A[i]);
    }

    // part 2)

    printf("\n\n\n");

    char tmp[41];
    //temp[41];

    if (strcmp(A[0], A[1]) == -1) {
        strcpy(tmp, A[1]);
        strcpy(A[1], A[0]);
        strcpy(A[0], tmp);
    }

    for (i = 0; i < 3; i++) {
        printf("\n%s", A[i]);
    }


    // part 3)

    printf("\n\n\n");

    int count, mikos;

    for (j = 0; j < 3; j++) {
        if (strchr(A[j], ' ')) {
            strcpy(tmp, "0");
            i = 0;
            count = 0;
            while ((A[j][i] != ' ') && (A[j][i]) != '\0') {
                count++;
                i++;
            }
            count++;
            strncpy(tmp, A[j], count);
            if (j == 0) printf("\n\tCharacters from the beginning untill the %dst gap: ", j + 1);
            if (j == 1) printf("\n\tCharacters from the beginning untill the %dcd gap: ", j + 1);
            if (j == 2) printf("\n\tCharacters from the beginning untill the %drd gap: ", j + 1);
            printf("%s", tmp);

        }
    }

    printf("\n\n");

    for (j = 0; j < 3; j++) {
        i = 0;
        count = 0;
        mikos = strlen(A[j]);
        while ((A[j][i] != ' ') && (A[j][i]) != '\0') {
            count++;
            i++;
        }
        if (strchr(A[j], ' ')) {
            for (i = 0; i < (mikos - count); i++) {
                A[j][i] = A[j][i + count + 1];
            }
            if (j == 0) printf("\n\tCharacters from the %dst gap untill the end: ", j + 1);
            if (j == 1) printf("\n\tCharacters from the %dcd gap untill the end: ", j + 1);
            if (j == 2) printf("\n\tCharacters from the %drd gap untill the end: ", j + 1);
            printf("%s", A[j]);
        }
    }

    printf("\n\n\n");

    int ipol;

    if (strlen(A[0]) > 3 && strlen(A[1]) > 3 && strlen(A[2]) > 3) {
        for (j = 0; j < 3; j++) {
            count = strlen(A[j]);
            ipol = count - 4;
            for (i = 0; i < 5; i++) {
                A[j][i] = A[j][i + ipol];
            }
            A[j][4] = '\0';
        }
        if (strcmp(A[0], A[1]) == 0 && strcmp(A[0], A[2]) == 0 && strcmp(A[1], A[2]) == 0) {
            printf("\t--> %s\n", A[0]);
            printf("\t--> %s\n", A[1]);
            printf("\t--> %s", A[2]);
        } else printf("\n\tThe last 4 characters are not the same!");
    } else printf("One or more strings has not enough characters!");


    printf("\n\n\n\t\tPress Any Key!!!\n\n\n");
    getchar();

    /*--------------- Lab Course 8 -----------------------*/

    //--------------- exercise 1 -----------------------//

    //int done,i,sumch=0,strings=0;
    int done, sumch = 0, strings = 0;
    i = 0;
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
