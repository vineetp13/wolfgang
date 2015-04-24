#include<stdio.h>
#include<stdlib.h>

int main(void){
	int* p = (int*)malloc(sizeof(int));
	*p = 24;
	char *x = (char*) p;
	printf("\n %c %lu \n", *(x+7), sizeof(int));
	return 0;}
