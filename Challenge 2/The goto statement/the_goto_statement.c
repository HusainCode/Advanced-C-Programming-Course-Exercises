/*
 * Challenge 2: Usin goto
 * Author: Husain Alshaikhahmed
 * Description: Disclaimer: Using a goto statement is considered poor practice
 and Can result in your code resembling spaghetti code. *Date:
 */

/*
 * Write a program that uses a goto statement to simulate a nested looping
 structure that prints a triangle of asterisks.
 * The output should resemble something like the below:
          *
         * *
        *   *
       *     *
      *       *
      *********
 * The program should not utilize any looping constructs and instead only use the goto statement.

 * */

#include <complex.h>
#include <math.h>
#include <stdio.h>

// Prints Asterisks
void printAsterisks();

int main() {

    int i, j, rows = 5; // change 'rows' to increase or decrease the triangle size
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

void printAsterisks();