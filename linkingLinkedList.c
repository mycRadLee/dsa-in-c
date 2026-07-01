#include <stdio.h> 
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;

};

int main() {
    struct Node *newNode = malloc(sizeof(struct Node));
    //added
    struct Node *secondNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    //added
    if (secondNode == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    newNode->data = 5;
    newNode->next = NULL;
    //added
    secondNode->data = 10;
    secondNode->next = NULL;

    //added
    newNode->next = secondNode;

    //added
    struct Node *current = newNode;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    //printf("Node data: %d\n", newNode->data);
    return 0;
}

/* newNode->next = secondNode
 * linking: first node's "next" should point to the second node
 * so 5 should now lead to 10
 */

/* we want to walk the list from the front and print each value
 * struct Node *current = newNode; essentially starts at the head (the 5 node)
 * 
 * while (current != NULL) {}
 * essentially loops until NULL end is reached
 * 
 * current = current->next; essentially proceeds/steps to the next node
 */