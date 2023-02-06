//#include "main.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;
typedef struct node *nodePtr;

nodePtr head = NULL;

void insert(int x) {
  nodePtr temp = (Node *)malloc(sizeof(Node));
  temp->data = x;
  temp->next = head;
  head = temp;
}

void Print(void) {
  nodePtr temp = head;
  while (temp) {
    printf("%d\n", temp->data);
    temp = temp->next;
  }
}

int main(void) 
{
    insert(7);
    Print();
}
