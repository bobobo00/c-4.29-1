#ifndef STACK_H_
#define STACK_H_
 

#include <stdio.h>
#include <windows.h>
#define MAXSIZE 20


typedef struct{
	int data[MAXSIZE];
	int top;
}sqstack;

sqstack Push(sqstack *s, int elem);
int Pop(sqstack *s);
void Init(sqstack *s);

#endif