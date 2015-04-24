#include<stdio.h>
#include<stdlib.h>

void* align_malloc(int num, int align){
	void* ptr = NULL;
	while((ptr!=NULL)){
		ptr = malloc(1000);
		free(ptr);}
	return ptr;
}

int main(void){
	void *p = align_malloc(1000,128);
	printf("\n %x \n", p);
	return 0;}
