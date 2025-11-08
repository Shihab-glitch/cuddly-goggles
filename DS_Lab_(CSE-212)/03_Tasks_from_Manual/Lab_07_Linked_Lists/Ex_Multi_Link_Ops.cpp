/**
 *   author   : Shihab-glitch
 *   created  : 08 14:34:10
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// Node definition
struct Node {
    int data;
    struct Node* next;
};

/*---------------------------------------
  Function 1: Insert at the beginning
---------------------------------------*/
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

/*---------------------------------------
  Function 2: Insert after a given node
---------------------------------------*/
void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

/*---------------------------------------
  Function 3: Insert at the end
---------------------------------------*/
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

/*---------------------------------------
  Function 4: Delete a node by key
---------------------------------------*/
void deleteNode(struct Node** head_ref, int key) {
    struct Node *temp = *head_ref, *prev = NULL;

    // If the head node holds the key
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

/*---------------------------------------
  Function 5: Search for a node
---------------------------------------*/
int searchNode(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return 1;
        head = head->next;
    }
    return 0;
}

/*---------------------------------------
  Function 6: Sort the linked list
---------------------------------------*/
void sortLinkedList(struct Node** head_ref) {
    struct Node *current = *head_ref, *index = NULL;
    int temp;

    if (head_ref == NULL)
        return;

    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}

/*---------------------------------------
  Function 7: Print the linked list
---------------------------------------*/
void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/*---------------------------------------
  MAIN: Demonstrate function usage
---------------------------------------*/
int main() {

    fast_io;

    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    printf("Linked list: ");
    printList(head);

    printf("After deleting an element: ");
    deleteNode(&head, 3);
    printList(head);

    int item_to_find = 3;
    if (searchNode(head, item_to_find))
        printf("%d is found\n", item_to_find);
    else
        printf("%d is not found\n", item_to_find);

    sortLinkedList(&head);
    printf("Sorted List: ");
    printList(head);

    return 0;
}