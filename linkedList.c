/* Notes
 * Building nodes requires asking the system for memory while the program runs
 * The tool for that (malloc) lives in stdlib.h
 * 
 * Analogy
 * stdio.h is the "printing" tookbox
 * stdlib.h is the "memory and utilities" toolbox
 */

#include <stdio.h> 
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;

};

/* Notes
 * why is next a pointer and not a whole node?
 * infinite size
 * in other words the compiler would need to reserve infinite space for a single node
 * not possible
 * 
 * also nodes live scattered in memory 
 * flexible
 * when you create linked-list nodes one at a time while the program runs,
 * each one gets placed wherever the system has free space
 * they are not next to each other in memory
 * 
 * Node 6 might be at one address, node 10 somewhere far away, node 376 somewhere else entirely
 
 * Key
 * The pointer is what lets them find each other despite being scattered
 */

int main() {
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    newNode->data = 5;
    newNode->next = NULL;
    printf("Node data: %d\n", newNode->data);
    return 0;
}

/* what is malloc
 * gives a fresh chunk of memory right now, while the program is running
 * malloc means memory allocate
 * 
 * Analogy
 * essentially you're at a storage facility (with infinite? storage units)
 * you walk up to the desk to say "I need one more storage unit, right now"
 * the space is then yours until you give it back
 
 * 1. You tell it how much space you need (enough for one Node)
 * 2. It hands back a pointer to that space (the key/address) 
 * OR
 * NULL if the facility is full (out of memory)
 */

/* struct is what-a-node-is (blueprint, top of file)
 * the main function is the what-we-actually-d0 (create nodes, link them, print them)
 */

/* so make sure to add a safety check: if malloc failed (in other words, storage facility full), it returns NULL
 * Writing to NULL crashes the program, so need to stop if that happens.
 * the return 1; basically stops main and hands control back to the operating system
 * The process:
 * if allocation failed, then print message so a human knows why, then exit
 */

 /* Node->data = 99; 
  * this basically puts the value 99 in the data field
  *
  * Node->next = NULL;
  * no node after this one yet, so point to nothing
  */