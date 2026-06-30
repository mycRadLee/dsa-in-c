/* This pulls the "standard input and output" toolbox
 * contains printf

 * Analogy
 * You grab the toolbox that has the "print to screen" tool before you use it
 */
#include <stdio.h>

/* every C program starts running at main
 
 * Analogy
 * front door
 * the computer walks in here first
 */
int main() {
    printf("Hello from C, this is mycRadLee\n"); //the \n means new line
    return 0; //tells system "the program finished successfully." 0 means "no errors"

}

/* Notes
 * any .c file is human readable instructions
 * but the computer needs them translated into machine code it cann actually run
 * the tool that does that is a compiler called gcc
 
 * Important
 * gcc is the compiler (aka translator)
 * hello.c is my source file, the input (human readable C)
 * -o hello "output a program named hello." -o means "output file, call it this." 
 */

 /* ls 
  * basically lists
  * should list hello.c (my source) and hello (the compiled program) 
  * hello.c is my recipe
  * hello is the acutal cooked dish
  * 
  * ./hello
  * means run the program right here in this folder
  * linux needs the ./
  * it won't find it otherwise
  */