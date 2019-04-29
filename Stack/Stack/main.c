#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"
int main(){
	sqstack s;
	Init(&s);
	int input = 0;
	printf("Plese input numbers:");
	scanf("%d", &input);
	Push(&s,input);
	int output=Pop(&s);
	printf("%d", output);
	system("pause");
	return 0;
}