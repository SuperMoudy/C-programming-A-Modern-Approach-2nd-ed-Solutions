/*
 * stack.h
 *
 *  Created on: May 9, 2020
 *      Author: SuperMoudy
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdbool.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node *Stack;

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);


#endif /* STACK_H_ */
