#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/*Declaring a head pointer*/

nodePtr head;
head = NULL;

int main(void)
{
	typedef Node *nodePtr;

	/*first node*/
	nodePtr temp = (Node *)malloc(sizeof(Node));
	temp->data = 5;
	temp->link = NULL;
	head = temp;

	//testing
	printf("%d", temp->data);
}





