#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"
void Init(sqstack *s){
	s->top = -1;
}
sqstack Push(sqstack *s, int number){
	if (s->top == MAXSIZE - 1||s->top+number>MAXSIZE){
		printf("ERROR!");
		return *s;
	}
	int elem = 0;
	while (number){
		scanf("%d", &elem);
		s->top++;
		s->data[s->top] = elem;
		number--;
	}
	return *s;
}
int Pop(sqstack *s){
	if (s->top == -1){
		printf("error!");
		return 0;
	}
	int elem = s->data[s->top];
	s->top--;
	return elem;
}