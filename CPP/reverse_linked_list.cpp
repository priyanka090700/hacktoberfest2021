/*Linked list : 9 32 65 10 85
Reversed linked list : 85 10 65 32 9*/
#include <stdio.h>
struct Node {
   int data;
   struct Node* next;
};
Node* insertNode(int key) {
   Node* temp = new Node;
   temp->data = key;
   temp->next = NULL;
   return temp;
}
void tailRecRevese(Node* current, Node* previous, Node** head){
   if (!current->next) {
      *head = current;
      current->next = previous;
      return;
   }
   Node* next = current->next;
   current->next = previous;
   tailRecRevese(next, current, head);
}
void tailRecReveseLL(Node** head){
   if (!head)
      return;
   tailRecRevese(*head, NULL, head);
}
void printLinkedList(Node* head){
   while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
   }
   printf("\n");
}
int main(){
   Node* head1 = insertNode(9);
   head1->next = insertNode(32);
   head1->next->next = insertNode(65);
   head1->next->next->next = insertNode(10);
   head1->next->next->next->next = insertNode(85);
   printf("Linked list : \t");
   printLinkedList(head1);
   tailRecReveseLL(&head1);
   printf("Reversed linked list : \t");
   printLinkedList(head1);
   return 0;
}