# Programming_Lab_II_Course

## Description


This repo contains excersices from my second year Programming Lab Courses at TEI of Central Macedonia

## Exercises


### Lab Course 2

#### Ex1

- a) Write a program in C language, which: (a) will display on the screen the following format:
```
  *
 ***
*****
```
- b) Without the use of variables, numbers 213432, 3434 as well as the result of their summation will appear on the screen.


#### Ex2


- a) Write a program in C language, which: (a) will store in the following variables:
    - Your birthday (eg 12)
    - My month of birth (eg 7)
    - Your birth year (eg 1985)
    - Your height in meters (eg 1.85)
    - The first letter of your name (eg X)

- b) The above items will be displayed on the screen. The date will appear in the day / month / year format. The height will be displayed with two decimal places.


#### Ex3


Write a program in C language, which:
- a) It will read from the keyboard two integers, which they will store in variables and display them on the screen.
- b) It will calculate the sum and the product of the two numbers and display them on the screen.
- c) It will display the absolute values of all the above numbers on the screen (the abs (x) function is in the math.h header file, returns the absolute value of an integer x.


#### Ex4


Write a program in C language, which:
- a) It will read from the keyboard two integers, which they will store in variables and display them on the screen.
- b) Calculate the perimeter of the rectangle of parallelogram created when the above integer numbers are set as side lengths. The perimeter will be displayed on the screen.


### Lab Course 3

#### Ex1

Write a program in C language, which:
- a) Reads the initial letter of your name and surname (use the getchar () command), stores them in two variables and then displays them (use the putchar () command).
- b) What will be seen if the command is overwritten by getch () and getche ())?

#### Ex2


Write a program in C language, which will include the following code.

```
int x, y, z; 
x = 0; y = 10;              printf(“\t\n\n\nx =%d y=%d\n",x,y); 
z = (x>y);                  printf(“x>y is %d\n”,z); 
z = (x==y);                 printf(“x==y is %d\n”,z); 
z = (x!=y);                 printf(“x!=y is %d\n”,z); 
z = (x && y);               printf(“x && y is %d\n”,z); 
z = !(x && y) || (x || y);  printf(“!(x && y) || (x || y) is %d\n”,z);
x = 10;                     printf(“\t\n\n\nx =%d y=%d\n",x,y);
z = (x>y);                  printf(“x>y is %d\n”,z); 
z = (x!=y);                 printf(“x!=y is %d\n”,z); 
z = (x && y);               printf(“x && y is %d\n”,z); 
float f1, f2; 
f1 = 5/(float)x;            printf(“\n\n5/(float)%d = %f\n”,x,f1); 
f2 = 5.0/(float)x;          printf(“5.0/(float)%d = %f\n”,x,f2);
                            printf(“x=%d NOT(x)=%d\n”,x,!x); 
z = 10 + x;                 printf(“10+%d = %d\n”,x,z); 
z = 10 + (!x);              printf(“10+NOT(%d) = %d\n”,!x,z);
```

### Lab Course 4

#### Ex1

Write a program in C language, which:
- a) It will read from the keyboard three integers, which it will store in variables a, b, c, and will display the quotient and the remainder of the show (a + b) / c on the screen.
- b) It should be checked whether c ≠ 0. In case of equality, the above division will not take place and an appropriate message will be displayed. For this purpose, the #define pre-processor directive will declare the MY_ZERO 1E-6 constant and check whether the integer value of c is less than MY_ZERO, so then we will assume that c is 0.

#### Ex2


Write a program in C language, which:
- a) It will read from the keyboard three integers, which it will store in variables a, b, c.
- b) Using multiple if-else will do the following:
    - If all three numbers are equal, they will display the message "Success!".
    - If two of the three are equal, it will display the message "Near!".
    - If all three are uneven, the message "Failure!" Will be displayed.


#### Ex3


Write a program in C language, which:
- a) It will read from the keyboard a character and store it in the ch variable.
- b) Using the switch command, one of the following actions will be performed:
    - Entering the 'K' character will result in the message 'Win!'.
    - Entering the 'E' character will cause the message 'Missed!'
    - Entering the 'T' character will result in the message 'End!'.
    - Entering any other character will result in the message "Incorrect choice!"

### Lab Course 5

#### Ex1

Write a program in C language, which:
- a) It will read from the keyboard a physical number (without a good value control), which it will store in variable n.
- b) Using a repeat proposition for the user, the integer will be given consecutively n integer numbers and the average displayed on the screen will be exported.

#### Ex2


a) Write a program in C language, which will implement the repeat proposition of exercise 1 using while. 
b) Write a C language program that will implement the repeat proposition of exercise 1 using do-while.


#### Ex3


Write a program in C language, which uses a double (nested) repeat proposition for will display on the screen the whole of the board of the training (no table is required).

#### Ex4


Write a program in C language, which:
- a) By using an appropriate repeat sentence, it will read characters from the keyboard until it is given a "white" character, which it will display on the screen (including the "white" character).
- b) It will repeat the leg (s) without showing on the screen the "white" character.

### Lab Course 6

#### Ex1

Write a program in C language, which:
- a) Read from the keyboard the dimension n (greater than or equal to 2) of a square A table with real numbers.
- b) Indicates the square table and renders it values via the keyboard. Subsequently, the table contents will be displayed on the screen with the known display in rows and columns, with two decimal places.

#### Ex2


In the exercise table 1:
- a) The "trace" of the table will be calculated and displayed on the screen.
- b) The first one will be reprinted with the second row of the table and the new table format will be displayed on the screen.
- c) Next, the first and third columns (if any) will be overwritten and the new table format will be displayed on the screen.


#### Ex3

Write a program in C language, which:
- a) It will indicate two tables B (3x2) and C (2x4), which will be initialized with real numbers numbers.
- b) Then the multiplication of tables will be executed, the results will be stored in Table D (nxk) and the display will be displayed with the known display in rows and columns, with two decimal places.

### Lab Course 7

#### Ex1

Write a program in C language, which:
- a) Using the get command it will read three strings from the keyboard and store them in a character table A (3x41) (it is assumed that the two alphanumeric have the appropriate length and no boundary control is required). The contents of the panel will then be displayed on the screen.
- b) The alphanumeric in the first and second position will be sorted by size, in ascending order of placement in the table, ie the one with the shorter length will be moved to the first position and the one with the longest length to the second. The contents of the panel will then be displayed on the screen.

#### Ex2


In the exercise table 1, when one of the three strings is empty, its characters up to the first blank will be copied to a one-dimensional table and then printed as an alphanumeric. In addition, the characters from the first blank to the end of the string will be moved to the beginning of the string and the resulting string will be displayed on the screen.

#### Ex3

In the exercise table 1, the characters of the last four positions and the three alphanumeric tables in the table will be compared after checking whether all three alphanumeric characters have at least 4 characters. If the three alphanumeric have their last 4 characters, they will be printed as an alphanumeric (the implementation must contain strcmp). strcmp

### Lab Course 8

#### Ex1

Write a program in C language, which will execute a repeat sentence while, while in each iteration of which: 
- a) Using the get () function will get from the keyboard an alphanumeric of up to 99 characters, it will save it in the arr table [ 100 ] (no check of the length of the received string is required) and will display it on the screen. 
- b) Replaces capital letters with the corresponding lowercase and vice versa, taking into account that in the ASCII code a capital letter of the Latin alphabet is 32 positions behind the corresponding small. The resulting string will be displayed on the screen.
The implementation requires that the islower (), () isupper (), () tolower (), () toupper (), () functions in < ctype.h > reverses. 
- c) The lowercase and uppercase letters of the resulting alphanumeric will appear on the screen. 
- d) The repeat sentence will end when the user gives an alphanumeric beginning at "end". end 
- e) At the conclusion of the recursive sentence, the number of alphanumeric reads and the sum of the characters contained therein will be displayed, not including the characters of the string containing the end. end