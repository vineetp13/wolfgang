#include <stdio.h>
#define MAX 100

int Divide(int a, int b){
	while(a%b){
		a=a/b;}
	return a;}

int isUgly(int num){
	num = Divide(num,2);
	num = Divide(num,3);
	num = Divide(num,5);

	if(num==1){
		return 1;}
	else
		return -1;}

int NthUgly(int n){
	int Ugly[MAX];
	Ugly[0] = 1;

	int next_num_2=1, next_num_3=1, next_num_5=1;
	
	int next_Ugly;
	int i=1;

	while(i<MAX){
		next_num_2*2;
		
