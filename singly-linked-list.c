
#include<stdio.h>  
#include<stdlib.h>  

struct Node {
    int data;
    struct Node * next;
};

void insertAtBegining(struct Node ** head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
}

void insertAtEnd(struct Node** head, int data)
{
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;

    if (*head == NULL){
       *head = ptr;
       return;
    }

    struct Node* current = *head;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = ptr; 
}

void show(struct Node* head){
    struct Node* current = head;

    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
    // printf("NULL\n");

}

int main(){
    struct Node* head = NULL;
    insertAtBegining(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 90);
    show(head);
}