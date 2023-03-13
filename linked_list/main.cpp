#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

/*
Complexidade de tempo
-> Melhor Caso
  O(1) -> Constante
-> Caso Medio
  O(1) -> Constante
-> Pior caso
  O(1) -> Constante

Complexidade de Espaco
-> Melhor Caso
  O(1) -> Constante
-> Caso Medio
  O(1) -> Constante
-> Pior caso
  O(1) -> Constante
*/
void insert(Node **head,Node **tail, Node *node) {
  if(*head == NULL) {
    *head = node;
    *tail = node;
  } else {
    (*tail)->next = node;
    *tail = node;
  }
}


/*
Complexidade de tempo
-> Melhor caso
  O(1) -> Constante
-> Caso medio
  O(N/2) -> O(N) -> Linear
-> Pior caso
  O(N) -> Linear

Complexidade de espaco
-> Melhor caso
  O(1) -> Constante
-> Caso medio
   O(1) -> Constante
-> Pior caso
   O(1) -> Constante
*/
Node *find(Node *head,int searched) {
  Node *current = head;
  while (current != NULL) {
    if(current->data == searched) {
      return current;
    }
    current = current->next;
  }

  return NULL;
}

/*
Complexidade de tempo
Melhor caso
-> O(N) -> Linear
Caso medio
-> O(N) -> Linear
Pior caso
-> O(N) -> Linear


Complexidade de espaco
Melhor caso
-> O(1) -> Constanter
Caso medio
-> O(1) -> Constante
Pior caso
-> O(1) -> Constante
*/


void printLinkedList(Node *head) {
  Node *current = head;

  while (current != NULL) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "NULL" << endl;

}

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  for (int i = 1; i <= 10; i++) {
    Node *node = new Node();
    node->data = i;
    node->next = NULL;
    insert(&head, &tail, node);
  }

  printLinkedList(head);

  Node *element = find(head, 7);

  if(element != NULL) {
    cout << "Element " << element->data << " exists" << endl;
  } else {
    cout << "Element doesn't exists" << endl;
  }
return 0;
}
