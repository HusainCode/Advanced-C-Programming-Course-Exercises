/*
  * Challenge 3: Char functions
  * Author: Husain Alshaikhahmed
 * Description:
   1-Write a program to count the number of words and characters in a file OR
 from standard input
 2- This program can take zero command-line arguments or one
 command-line argument
 A- If there is one argument, it is interpreted as the
 name of a file
 B- If there is no argument, the standard input(stdin) is to be
 used for input
 Date:3/
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Function declaration
// int countFileCharacters(FILE *file);
int countInputCharacters();

int main() {

    //char userInput[100]; // Allocate a string of 100 charcters
    printf("Enter a prompt:");
    fflush(stdout); // Flush the output buffer before reading input

    // Safely handle the user input with out rsiking buffer overflow
    //fgets(userInput, sizeof(userInput), stdin);

    int totalWords = countInputCharacters();
    printf("There are %d words.", totalWords);

    return 0;
}

// int countFileCharacters(FILE *file){
//    file = fopen("readCharacters.txt", "r");
//   if(file == NULL){
//     perror("Unable to opne file!");
//     return 1;
//   }
//    processFile(file); // Call function with file

//   fclose(file); // Close the file
// };

int countInputCharacters() {
    int c, word = 0, count = 0;

    while((c = getchar()) != EOF) {
        if(isspace(c)) {
            word = 0;
        } else if (!word) {
            word = 1;
            count++; // increment word count
        }
    }
    return count;
};