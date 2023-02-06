#pragma once

typedef struct node {
  int data;
  struct node *next;
} Node;
typedef struct node *nodePtr;
nodePtr head = NULL;

void insert(int x);
void Print(void);

