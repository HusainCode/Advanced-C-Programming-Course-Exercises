/*
 * Challenge 2: Usin goto
 * Author: Husain Alshaikhahmed
 * Description: Disclaimer: Using a goto statement is considered poor practice
 * and Can result in your code resembling spaghetti code.
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * This program prints a pyramid-shaped pattern of asterisks in ascending order
 * It achieves this without using traditional looping constructs,
 * instead using goto statements to simulate the loops.
 * Date:3/9/2024
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
 * the peorgam should not utlize any lopping costructs abd instead only use the
 goto statment

 * */

#include <stdio.h>

void printSpaces(int count);
void printAsteriskPattern(int line, int totalLines);

int main() {
    int totalLines = 7; // Total lines for the pattern

    int currentLine = 1; // Start from the first line

// Label for simulating outer loop
    outerLoop:
    if (currentLine <= totalLines) {
        printAsteriskPattern(currentLine, totalLines);
        currentLine++;
        goto outerLoop;
    }

    return 0;
}

// Print spaces
void printSpaces(int count) {
    int spaceCounter = 0;
    spaceLoop:
    if (spaceCounter < count) {
        printf(" ");
        spaceCounter++;
        goto spaceLoop;
    }
}

// Handle printing asterisk pattern per line
void printAsteriskPattern(int line, int totalLines) {
    int spaceCount = totalLines - line;
    printSpaces(spaceCount); // Print leading spaces

    // Handling the asterisk printing logic
    int asteriskCounter = 0;
    asteriskLoop:
    if (asteriskCounter < (2 * line - 1)) {
        // Print an asterisk at the start or end of the line, spaces in between
        if (line == totalLines || asteriskCounter == 0 ||
            asteriskCounter == 2 * line - 2) {
            printf("*");
        } else {
            printf(" ");
        }
        asteriskCounter++;
        goto asteriskLoop;
    }
    printf("\n"); // Move to the next line after printing one line of pattern
}
