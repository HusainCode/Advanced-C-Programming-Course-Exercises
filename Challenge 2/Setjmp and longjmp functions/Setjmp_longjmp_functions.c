/*
  * Challenge 2: Setjmp and longjmp functions
  * Author: Husain Alshaikhahmed
  * Disclaimer: Using setjmp and longjmp is generally considered a bad
  * practice, similar to goto, because they can lead to hard-to-follow control
  * flows and make the code difficult to understand and maintain. This code
  * demonstrates the use of setjmp and longjmp; however, using this technique is
  * considered a bad practice as it might result in 'spaghetti code'.
 * Description:
   1- Create a function named errorRecover that prints out an error message and
      then uses longjmp to transfer control back to the main function's loop. 2- The
      main function should include an infinite loop that uses setjmp at the top of
      the loop before processing.
   3- Add dummy code in your loop that simulates an error (by calling
 errorRecover) when setjmp returns 0.
    Date: 3/17/32024
 */

#include <setjmp.h>
#include <stdio.h>

jmp_buf buf; // Buffer for setjmp/longjmp

// Function to handle error and jump back to main loop
void errorRecover() {
    printf("An error occurred!\n");
    longjmp(buf, 1); // Transfer control back to main function loop
}

int main() {
    while (1) {
        if (setjmp(buf) == 0) {
            // setjmp returns 0 on direct invocation
            printf("Simulating an error...\n");
            errorRecover();
        } else {
            // When coming back from longjmp, skip the error simulation
            printf("Recovered from error, continuing loop...\n");
        }

        break;
    }
    return 0;
}