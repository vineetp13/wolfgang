#include<stdio.h>

int count2(int n){
	int j=0;
	int count=0;
	while(j<n){
	int i =j;
		while(i){
			if(i%10==2) count++;
			i=i/10;
//			printf("\n sdkjfvkjnfv%d", i); }
	}
		j++;
//	printf("\n %d", j);}
}
	return count;
		}

int main(void){
	printf("\n %d \n", count2(100));
	return 0;}
